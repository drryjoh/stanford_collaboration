 constexpr Species molecular_weights()  {return {double(1.008),double(2.016),double(15.999),double(31.998),double(17.007),double(18.015),double(33.006),double(34.014),double(39.95)};}
 constexpr Species inv_molecular_weights()  {return {double(0.9920634920634921),double(0.49603174603174605),double(0.06250390649415588),double(0.03125195324707794),double(0.05879931792791203),double(0.055509297807382736),double(0.030297521662727988),double(0.029399658963956014),double(0.025031289111389236)};}
    // Define the species names as a fixed-size array
    #pragma once
    #include <string>

    static constexpr std::array<const char*, 9> species_names_gen()
    {
        return {"H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "AR"};
    }

    // Return the species name for a given index
    static std::string species_name_gen(int index)
    {
        constexpr auto names = species_names_gen(); // Get the list of species names use auto for now
        return names[index]; // Return the name of the requested species
    }
    // Return the species name for a given index
    int species_index_gen(const char* name)
    {
        constexpr auto names = species_names_gen(); // Get the list of species names use auto for now
        for(int i = 0; i<n_species; i++)
        {
            if (std::strcmp(names[i], name) == 0)
            {
                return i;
            }
        }
        return -1;
    }
    