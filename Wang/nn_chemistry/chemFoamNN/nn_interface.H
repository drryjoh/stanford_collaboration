
const int n_species = 10;
// Using alias for the array type (for example, an array of double values)
using Species = std::array<scalar, n_species>;


//fix these numbers
constexpr Species molecular_weights()
{
    return {scalar(2.016),scalar(1.008),scalar(31.998),scalar(15.999),scalar(17.007),scalar(33.006),scalar(34.014),scalar(18.015),scalar(39.95),scalar(28.014)};
}

//fix these numbers
constexpr Species inv_molecular_weights()
{
    return {scalar(0.49603174603174605),scalar(0.9920634920634921),scalar(0.03125195324707794),scalar(0.06250390649415588),scalar(0.05879931792791203),scalar(0.030297521662727988),scalar(0.029399658963956014),scalar(0.055509297807382736),scalar(0.025031289111389236),scalar(0.03569643749553795)};
}

// Define the species names as a fixed-size array
#pragma once
#include <string>

//fix this order
static constexpr std::array<const char*, 10> species_names_gen()
{
    //fix the openfoam order to match the nn order 
    return {"H2", "H", "O2", "O", "OH", "HO2", "H2O2", "H2O", "AR", "N2"};
}

// Return the species name for a given index
static std::string species_name_gen(int index)
{
    constexpr auto names = species_names_gen(); // Get the list of species names use auto for now
    return names[index]; // Return the name of the requested species
}

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
    }

    // Create source term fields
    PtrList<volScalarField> source_field(
        const PtrList<volScalarField>& C_0,
        const PtrList<volScalarField>& C_1,
        const scalar dt) const
    {
        PtrList<volScalarField> sourceField_(C_0.size());

        forAll(C_0, i)
        {
            sourceField_.set(
                i,
                new volScalarField(
                    IOobject(
                        "source_NN_" + C_0[i].name(),
                        mesh_.time().timeName(),
                        mesh_,
                        IOobject::NO_READ,
                        IOobject::NO_WRITE),
                    mesh_,
                    dimensionedScalar("zero", dimMass/dimVolume/dimTime, 0.0)));
        }

        scalar inv_dt = 1.0 / dt;

        forAll(C_0[0], cell_index)
        {
            forAll(C_0, i)
            {
                sourceField_[i][cell_index] = (C_1[i][cell_index] - C_0[i][cell_index]) * inv_dt;
            }
        }

        return sourceField_;
    }

    // ... Other functions (retain unchanged logic, fix comments and memory handling)
    
    void solve(
        PtrList<volScalarField>& Y,
        volScalarField& p,
        volScalarField& T,
        scalar dt) const
    {
        scalar log10_dt = std::log10(dt);

        forAll(T, cell_index)
        {
            std::array<scalar, 12> nn_input = {
                T[cell_index],                      // Temperature (K)
                p[cell_index] / 101325.0,          // Pressure (atm)
                Y[0][cell_index], Y[1][cell_index], Y[2][cell_index],
                Y[3][cell_index], Y[4][cell_index], Y[5][cell_index],
                Y[6][cell_index], Y[7][cell_index], Y[8][cell_index], // Mass fractions
                log10_dt                           // Log10 timestep
            };

            auto output = predict_combustion(nn_input);

            T[cell_index] = output[0];
            p[cell_index] = output[1] * 101325.0;

            for (label i = 0; i < n_species; ++i)
            {
                Y[i][cell_index] = output[i + 2];
            }
        }
    }
};
