#include "codeJeNN.H"
#include "reactingMixture.H"
struct NNInterface
{
    const fvMesh& mesh_; // Reference to the mesh for creating volScalarFields

    // Constructor
    NNInterface(const fvMesh& mesh) : mesh_(mesh) {}

    // Generate hard-coded list of species names
    static Foam::stringList species_names()
    {
        Foam::stringList species_names_(n_species);
        forAll(species_names_, i)
        {
            species_names_[i] = species_name_gen(i); // Placeholder for species name generator
        }
        return species_names_;
    }

    // Return the name of a specific species
    static Foam::string species_name(const Foam::label specieI)
    {
        Foam::stringList species_names_ = species_names();
        return species_names_[specieI];
    }

    // Check if species names match
    void check_species_list(const PtrList<volScalarField>& Y)
    {
        Foam::stringList species_names_ = species_names();
        Info << "Checking species names and idexes" << endl;
        forAll(species_names_, i)
        {
            if (Y[i].name() != species_names_[i])
            {
                FatalErrorInFunction
                    << "Mismatch: Y[" << i << "] is named '" << Y[i].name()
                    << "', expected '" << species_names_[i] << "'." 
                    << exit(FatalError);
            }
        }
        Info << "Check complete species are consistent" << endl;
    }

    // Check if species names match
    void useNN(
    volScalarField& UseNN,
    const PtrList<volScalarField>& Y,
    const volScalarField& p,
    const volScalarField& T)
    {
        forAll(T, cell_index)
        {
            if(T[cell_index] > 1500.0 && Y[5][cell_index]<0.090)
            {
                UseNN[cell_index] = 1.0;
            }
            else
            {
                UseNN[cell_index] = 0.0;
            }
        }
    }


    scalar rho_scalar( 
        scalarList Y, 
        scalar p, 
        scalar T) const
    {
        scalar inv_W_mix  = 0.0;
        scalar R = 8314.46261815324;
        Species mw = molecular_weights();
        for (label i = 0; i < n_species; ++i)
        {
            inv_W_mix+= Y[i]/mw[i];
        }

        return p/(R * inv_W_mix * T);
    }

    PtrList<volScalarField> 
    solve(
        const PtrList<volScalarField>& Y,
        const volScalarField& p,
        const volScalarField& T,
        const volScalarField& UseNN,
        scalar dt) const
    {
        PtrList<volScalarField> sourceField(Y.size());

        forAll(Y, i)
        {
            sourceField.set(
                i,
                new volScalarField(
                    IOobject(
                        "source_NN_" +Y[i].name(),
                        mesh_.time().timeName(),
                        mesh_,
                        IOobject::NO_READ,
                        IOobject::NO_WRITE),
                    mesh_,
                    dimensionedScalar("zero", dimMass/dimVolume/dimTime, 0.0)));
        }

        scalar inv_dt =  1.0/dt;
        forAll(T, cell_index)
        {
            if(UseNN[cell_index]>0.01)
            {
                scalarList Y0(n_species, 0.0);
                scalarList C0(n_species, 0.0);
                Species mw = molecular_weights();

                for (label i = 0; i < n_species; ++i)
                {
                    Y0[i] = Y[i][cell_index];
                }
                scalar rho0 = rho_scalar(Y0, p[cell_index], T[cell_index]);
                //Y_i = W_i * C_i / rho
                for (label i = 0; i < n_species; ++i)
                {
                    C0[i] = Y0[i]/mw[i] * rho0;
                }            
                //Changed Y to C0 here
                std::array<Scalar, 10> nn_input = {
                    T[cell_index],                      // Temperature (K)
                    p[cell_index] / 101325.0,          // Pressure (atm)
                    C0[0], C0[1], C0[2],
                    C0[3], C0[4], C0[5],
                    C0[6], C0[7]
                };

                auto output = predict_combustion(nn_input);
                //normalization
                // scalarList CNN(n_species, 0.0);
                // for (label i = 0; i < n_species - 1; ++i)
                // {
                //     CNN[i] = Foam::max(output[i + 2], SMALL);  // molar concentration input
                // }
                //define base matrix for projection to conservative space. This is constant for a given chemical kinetic mechanism. Be sure to update if you change the mechanism.
                scalar base_mat[8][6] = {
                    {-0.07964911, -0.15929821, -0.29986556, -0.52008201, -0.37951466, -0.59973111},
                    { 0.29005853,  0.58011707,  0.04576611, -0.19852631,  0.33582464,  0.09153222},
                    { 0.92035089, -0.15929821, -0.04166667, -0.00368423, -0.12131577, -0.08333333},
                    {-0.15929821,  0.68140357, -0.08333333, -0.00736845, -0.24263155, -0.16666667},
                    {-0.05801171, -0.11602341,  0.91666667, -0.10865496, -0.14134504, -0.16666667},
                    {-0.03637431, -0.07274861, -0.125     ,  0.78637431, -0.16137431, -0.25      },
                    {-0.13766081, -0.27532163, -0.125     , -0.11233919,  0.73733919, -0.25      },
                    {-0.11602341, -0.23204683, -0.16666667, -0.21730992, -0.28269008,  0.66666667}
                };

                // Output vector
                scalarList CNN(n_species, 0.0);

                // Matrix-vector product: NN_concentrations (CNN) = base_mat @ output[2:]
                for (int i = 0; i < 8; ++i) {
                    for (int j = 0; j < 6; ++j) {
                        CNN[i] += base_mat[i][j] * output[2 + j];
                    }
                }
                // Now add in back the input to get deltaC
                for (int i = 0; i < 8; i++) {
                    CNN[i] = CNN[i] + nn_input[i + 2]; // NN outputs change of state properties, transferred to real values
                }

                scalar C1;

                for (label i = 0; i < n_species; ++i)
                {

                    C1 = CNN[i];
                    sourceField[i][cell_index] = (C1 - C0[i]) * inv_dt * mw[i];
                }    
            }
            else
            {
                for (label i = 0; i < n_species; ++i)
                {
                    sourceField[i][cell_index] = 0.0;
                }    
            }
        }

        return sourceField;
    }

    
    volScalarField Qdot(
        const psiReactionThermo& thermo,  // Ensure correct type
        const PtrList<volScalarField>& RR) const
    {

        tmp<volScalarField> tQdot
        (
            new volScalarField
            (
                IOobject
                (
                    "Qdot",
                    mesh_.time().timeName(),
                    mesh_,
                    IOobject::NO_READ,
                    IOobject::NO_WRITE,
                    false
                ),
                mesh_,
                dimensionedScalar("zero", dimEnergy/dimVolume/dimTime, 0)
            )
        );

        scalarField& Qdot = tQdot.ref();

        forAll(RR, i)
        {
            forAll(Qdot, celli)
            {
                // Get the chemical enthalpy (Hc) instead of Hs
                const scalar hi = thermo.composition().Hc(i);  
                Qdot[celli] -= hi * RR[i][celli];
            }
        }

        return tQdot;
    }

};
