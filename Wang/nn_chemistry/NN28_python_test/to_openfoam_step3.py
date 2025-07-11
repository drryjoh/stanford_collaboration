#!python3
import numpy as np
def write_openfoam_scalar_file(data, dimensions, name, location, boundary = "default"):
    n_points = len(data)
    header = """
    FoamFile
    {
        version     2.0;
        format      ascii;
        class       volScalarField;
        location    "0";
        object     """ + name +""";
    }
""" + f"\ndimensions      {dimensions};\n"+ """
    internalField   nonuniform List<scalar>
    """+f"{n_points}\n(\n".format(n_points)
    if boundary == "default":
        bottom = """
    );
    boundaryField
    {
        inlet
        {
            type            zeroGradient;
        }
        outlet
        {  
            type            zeroGradient;
        }
        bottom
        {
            type            zeroGradient;
        }
        top
        {
            type            zeroGradient;
        }
 
        frontAndBack
        {
            type            empty;
        }
    }
    """
    else:
        bottom = f"""
    );
    boundaryField
    {{
        inlet
        {{
            type            zeroGradient;
        }}
        outlet
        {{
            type            zeroGradient;
        }}
        bottom
        {{
            type            {boundary};
        }}
        top
        {{
            type            {boundary};
        }}
        frontAndBack
        {{
            type            empty;
        }}
    }}
    """
    f = open(f"{location}/{name}","w")
    f.write(header)
    for value in data:
        f.write(f"{value:7e}\n")
    f.write(bottom)
    f.close()
 
def write_openfoam_vector_file(vectors, dimensions, name, location, boundary="default"):
    n_points = len(vectors[:,0])
    header = """
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
        class       volVectorField;
        location    "0";
        object     """ + name +""";
    }
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
 
    """ + f"dimensions      {dimensions};"+ """
 
    internalField   nonuniform List<vector>
    """+f"{n_points}\n(\n".format(n_points)
    if boundary == "default":
        bottom = """
    );
    boundaryField
    {
        inlet
        {
            type            zeroGradient;
        }
        outlet
        {  
            type            zeroGradient;
        }
        bottom
        {
            type            zeroGradient;
        }
        top
        {
            type            zeroGradient;
        }
 
        frontAndBack
        {
            type            empty;
        }
    }
    """
    else:
        bottom = f"""
    );
    boundaryField
    {{
        inlet
        {{
            type            zeroGradient;
        }}
        outlet
        {{
            type            zeroGradient;
        }}
        bottom
        {{
            type            {boundary};
        }}
        top
        {{
            type            {boundary};
        }}
        frontAndBack
        {{
            type            empty;
        }}
    }}
    """
    f = open(f"{location}/{name}","w")
    f.write(header)
    for vector in vectors:
        values = ' '.join([f"{value:7e}" for value in vector])    
        f.write(f"({values})\n")
    f.write(bottom)
    f.close()

dat = np.loadtxt("consolidated_with_RRs.csv", delimiter = ",", skiprows=1)

data = ["RRH","RRH2","RRO","RRO2","RROH","RRH2O","RRHO2","RRH2O2"]
species_dimensions = ["[0 0 0 0 0 0 0 ]"] * 8
for i, d in enumerate(data[:-1]):
    write_openfoam_scalar_file(dat[:,i+14], species_dimensions[i], d, "6.70000000001e-05")