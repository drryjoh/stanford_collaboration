 constexpr Species molecular_weights()  {return {double(2.016),double(1.008),double(15.999),double(31.998),double(17.007),double(18.015),double(33.006),double(13.018999999999998),double(14.027),double(14.027),double(15.035),double(16.043),double(28.009999999999998),double(44.009),double(29.018),double(30.026),double(31.034),double(25.029999999999998),double(26.037999999999997),double(27.046),double(28.054),double(29.061999999999998),double(30.07),double(41.028999999999996),double(42.037),double(43.045),double(26.037999999999997),double(40.065),double(39.057),double(28.014)};}
 constexpr Species inv_molecular_weights()  {return {double(0.49603174603174605),double(0.9920634920634921),double(0.06250390649415588),double(0.03125195324707794),double(0.05879931792791203),double(0.055509297807382736),double(0.030297521662727988),double(0.07681081496274676),double(0.07129108148570615),double(0.07129108148570615),double(0.06651147322913202),double(0.06233248145608677),double(0.03570153516601214),double(0.022722624917630486),double(0.03446136880556896),double(0.033304469459801506),double(0.032222723464587225),double(0.03995205753096285),double(0.03840540748137338),double(0.03697404422095689),double(0.035645540742853074),double(0.03440919413667332),double(0.03325573661456601),double(0.02437300446025982),double(0.023788567214596667),double(0.023231501916598906),double(0.03840540748137338),double(0.02495944090852365),double(0.02560360498758225),double(0.03569643749553795)};}
    // Define the species names as a fixed-size array
    #pragma once
    #include <string>

    static constexpr std::array<const char*, 30> species_names_gen()
    {
        return {"H2", "H", "O", "O2", "OH", "H2O", "HO2", "CH", "CH2", "CH2(S)", "CH3", "CH4", "CO", "CO2", "HCO", "CH2O", "CH3O", "C2H", "C2H2", "C2H3", "C2H4", "C2H5", "C2H6", "HCCO", "CH2CO", "CH3CO", "H2CC", "PC3H4", "C3H3", "N2"};
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
    