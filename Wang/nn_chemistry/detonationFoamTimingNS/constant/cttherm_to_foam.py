#!python3
import cantera as ct

gas = ct.Solution("FFCM2_H2_Ar.yaml")
mw = gas.molecular_weights
formatted_text = """
/*--------------------------------*- C++ -*----------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Version:  6
     \\/     M anipulation  |
\*---------------------------------------------------------------------------*/
FoamFile
{
    version     2.0;
    format      ascii;
    class       dictionary;
    location    "constant";
    object      thermo.compressibleGas;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /
"""
for i, specie in enumerate(gas.species()):
    
    #fix
    As = 1.67e-6
    Ts = 170.00
    specie_name = specie.name
    species_dict = specie.input_data
    
    molWeight = mw[i]

    Tlow = species_dict['thermo']['temperature-ranges'][0]
    Thigh = species_dict['thermo']['temperature-ranges'][-1]
    Tcommon = species_dict['thermo']['temperature-ranges'][1]
    highCpCoeffs = species_dict['thermo']['data'][1]
    lowCpCoeffs = species_dict['thermo']['data'][0]
    highCpCoeffs = str(highCpCoeffs).replace('[','(').replace(']',')').replace(',','')
    lowCpCoeffs = str(lowCpCoeffs).replace('[','(').replace(']',')').replace(',','')

    formatted_text += f"""
    {specie_name}
    {{
        specie
        {{
            molWeight    {molWeight};
        }}
        thermodynamics
        {{
            Tlow    {Tlow};
            Thigh    {Thigh};
            Tcommon    {Tcommon};
            highCpCoeffs    {highCpCoeffs};
            lowCpCoeffs    {lowCpCoeffs};
        }}
        transport
        {{
            As    {As}; //possibly unused
            Ts    {Ts}; //possibly unused
        }}
    }}
    """
with open("thermFFCM2_generated", "w") as f:
    f.write(formatted_text)
    