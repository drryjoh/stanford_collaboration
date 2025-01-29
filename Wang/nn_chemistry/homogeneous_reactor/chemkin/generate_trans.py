# Input chemkin data as a string
with open("ffcm1_Ar_transport.dat", "r") as f:
    chemkin_data = f.read()

# Parse the input data into a list of species with their properties
species_data = []
for line in chemkin_data.strip().split("\n"):
    parts = line.split()
    species_name = parts[0]
    As = float(parts[2])
    Ts = float(parts[3])
    species_data.append((species_name, As, Ts))

# Generate the transportProperties file
transport_properties = """/*--------------------------------*- C++ -*----------------------------------*\\
  =========                 |
  \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\\\    /   O peration     | Website:  https://openfoam.org
    \\\\  /    A nd           | Version:  6
     \\\\/     M anipulation  |
\\*---------------------------------------------------------------------------*/
FoamFile
{
    version     2.0;
    format      ascii;
    class       dictionary;
    location    "chemkin";
    object      transportProperties;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

species
{
"""

# Add species data
for species_name, As, Ts in species_data:
    transport_properties += f"""    {species_name}
    {{
        As      {As};
        Ts      {Ts};
    }}
"""

# Close the file structure
transport_properties += """}

// ************************************************************************* //
"""

# Write the output to a file
with open("ffcm1_Ar_transportProperties", "w") as f:
    f.write(transport_properties)

print("transportProperties file generated successfully!")
