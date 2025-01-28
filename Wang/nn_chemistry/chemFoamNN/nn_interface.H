
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
    const fvMesh& mesh_;              // Reference to the mesh for creating volScalarFields

    // Constructor: Initialize members
    NNInterface(const fvMesh& mesh)
        : mesh_(mesh) // Initialize with the provided mesh reference
    {}

    static Foam::stringList species_names() //fix later
    {
        // Hard-coded list of species names
        Foam::stringList species_names_(n_species);
        forAll(species_names_, i)
        {
            species_names_[i] = species_name_gen(i);
        }
        return species_names_;
    }

    static Foam::string species_name(const Foam::label specieI)
    {
        Foam::stringList species_names_ = species_names(); // Get the list of species names
        return species_names_[specieI];                   // Return the name of the requested species
    }

    // OF's first order source term representation
    PtrList<volScalarField> source_field
    (
        const PtrList<volScalarField>& C_0,
        const PtrList<volScalarField>& C_1,
        const scalar dt
    ) const
    {

        PtrList<volScalarField> sourceField_(Y.size()); // Create PtrList with the same size as Y

        forAll(Y, i)
        {
            sourceField_.set
            (
                i,
                new volScalarField
                (
                    IOobject
                    (
                        "source_NN_" + Y[i].name(),
                        mesh_.time().timeName(),
                        mesh_,
                        IOobject::NO_READ,
                        IOobject::NO_WRITE
                    ),
                    mesh_,
                    dimensionedScalar("zero", dimMass/dimVolume/dimTime, 0.0) // Initialize with dimensions
                )
            );
        }


        Species inv_molecular_weights_ = inv_molecular_weights();
        Species concentrations = {scalar(0)};
        Species net_production_rates = {scalar(0)};
        scalar inv_dt = 1.0/dt; 

        forAll(T, cell_index)
        {
            for(label i=0; i<n_species; i++)
            {
                sourceField_[i][cell_index] = (C_1[i]-C_0[0]) * inv_dt;
            }
        }

        return sourceField_;
    }
    
    PtrList<volScalarField> concentrations
    (
        const PtrList<volScalarField>& Y,
        const volScalarField& rho,
        const volScalarField& T
    ) const
    {  
        Species inv_molecular_weights_ = inv_molecular_weights();
        
        PtrList<volScalarField> concentrations(Y.size()); // Create PtrList with the same size as Y

        forAll(Y, i)
        {
            concentrations.set
            (
                i,
                new volScalarField
                (
                    IOobject
                    (
                        "C" + Y[i].name(),
                        mesh_.time().timeName(),
                        mesh_,
                        IOobject::NO_READ,
                        IOobject::NO_WRITE
                    ),
                    mesh_,
                    dimensionedScalar("zero", dimMoles/dimVolume, 0.0) // Initialize with dimensions
                )
            );
        }


        forAll(T, cell_index)
        {
            for(label i=0; i<n_species; i++)
            {
                concentrations[i][cell_index] = rho[cell_index] * Y[i][cell_index] * inv_molecular_weights_[i];
            }
        }

        return concentrations;
    }
        
    volScalarField density
    (
        const PtrList<volScalarField>& Y,
        const volScalarField& p,
        const volScalarField& T
    ) const
    {
        Species inv_MW = inv_molecular_weights();

        volScalarField rho_
        (
            IOobject
            (
                "rho",
                mesh_.time().timeName(),
                mesh_,
                IOobject::NO_READ,
                IOobject::NO_WRITE
            ),
            p.mesh(),
            dimensionedScalar("zero", dimMass/dimVolume, 0.0)
        );

        forAll(p, cellI)
        {
            scalar inv_MW_avg = scalar(0);
            forAll(Y, specieI)
            {
                inv_MW_avg+= Y[specieI][cellI] * inv_MW[specieI];
            }
            rho_[cellI] = p[cellI]/(T[cellI] * universal_gas_constant() * inv_MW_avg);
        }
        
        return rho_;
    }

    void density_from_concentrations
    (
        volScalarField& rho,
        const PtrList<volScalarField>& C
    ) const
    {

        Species MW = molecular_weights();

        forAll(rho, cellI)
        {
            scalar sum_rho = scalar(0);
            forAll(C, specieI)
            {
                sum_rho+= C[specieI][cellI] * MW[specieI];
            }

            rho[cellI] = sum_rho;
        } 
    }

    void mass_fractions_from_concentrations_density
    (
        PtrList<volScalarField>& Y,
        const PtrList<volScalarField>& C,
        const volScalarField& rho
    ) const
    {

        Species MW = molecular_weights();

        forAll(rho, cellI)
        {
            forAll(C, specieI)
            {
                Y[specieI][cellI] = C[specieI][cellI] * MW[specieI]/rho[cellI];
            }
        } 
    }

    void pressure_from_concentrations_temperature
    (
        volScalarField& p,
        const PtrList<volScalarField>& C,
        const volScalarField T
    ) const
    {
        forAll(p, cellI)
        {
            scalar sum_C = scalar(0);
            forAll(C, specieI)
            {
                sum_C+= C[specieI][cellI];
            }

            p[cellI] = T[cellI] * universal_gas_constant() * sum_C;
        }
    }

    volScalarField internal_energy
    (
        const PtrList<volScalarField>& Y,
        const volScalarField& rho,
        const volScalarField& T
    ) const
    {

        volScalarField internal_energy_
        (
            IOobject
            (
                "internal_energy",
                mesh_.time().timeName(),
                mesh_,
                IOobject::NO_READ,
                IOobject::NO_WRITE
            ),
            rho.mesh(),
            dimensionedScalar("zero", dimEnergy/dimVolume, 0.0)
        );

        Species inv_molecular_weights_ = inv_molecular_weights();
        Species concentrations = {scalar(0)};
        Species net_production_rates = {scalar(0)};

        forAll(T, cell_index)
        {
            for(label i=0; i<n_species; i++)
            {
                concentrations[i] = rho[cell_index] * Y[i][cell_index] * inv_molecular_weights_[i];
            }
            internal_energy_[cell_index] = internal_energy_volume_specific(concentrations, T[cell_index]);
        }

        return internal_energy_;
    }
    
    void temperature_from_internal_energy
    (
        const PtrList<volScalarField>& C,
        const volScalarField& internal_energy,
        volScalarField& T
    ) const
    {
        Species concentrations = {scalar(0)};
        Species net_production_rates = {scalar(0)};

        forAll(T, cell_index)
        {
            for(label i=0; i<n_species; i++)
            {
                concentrations[i] = C[i][cell_index];
            }

            T[cell_index] = temperature(internal_energy[cell_index], concentrations, int(3)); 
        }
    }

    void solve
    (
        PtrList<volScalarField>& Y,
        volScalarField& p,
        volScalarField& T,
        scalar dt
    ) const
    {

        Species inv_molecular_weights_ = inv_molecular_weights();
        Species concentrations = {scalar(0)};
        Species net_production_rates = {scalar(0)};
        scalar log10_dt = std::log10(dt);

        forAll(T, cell_index)
        {
            std::array<Scalar, 12> 
            nn_input = 
            { 
                T[cell_index], // Temperature, K 
                p[cell_index]/101325.0, // Pressure, atm 
                Y[0][cell_index], // Mass fraction of 9 species, starts, H 
                Y[1][cell_index], // H2 
                Y[2][cell_index], 
                Y[3][cell_index], // O2 
                Y[4][cell_index], 
                Y[5][cell_index], 
                Y[6][cell_index], 
                Y[7][cell_index], 
                Y[8][cell_index], // Mass fraction, ends, O3 
                log10_dt // log10(time step, s) 
            }; // State properties at current time

            auto output = predict_combustion(input);

            T[cell_index] = output[0]; // Temperature, K 
            p[cell_index] = output[1] * 101325.0; // Pressure, atm 
            Y[0][cell_index] = output[2]; // Mass fraction of 9 species, starts, H 
            Y[1][cell_index] = output[3]; // H2 
            Y[2][cell_index] = output[4]; 
            Y[3][cell_index] = output[5]; 
            Y[4][cell_index] = output[6];
            Y[5][cell_index] = output[7];
            Y[6][cell_index] = output[8];
            Y[7][cell_index] = output[9];
            Y[8][cell_index] = output[10];
        }

        return internal_energy_;
    }

};
