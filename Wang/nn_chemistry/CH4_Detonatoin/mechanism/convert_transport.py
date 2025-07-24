#!python3
import cantera as ct

# Load your mechanism
gas = ct.Solution("FFCMy_12.yaml")

# Create and write to the OpenFOAM-style transport file
with open("openfoam_transport.txt", "w") as f:
    for sp in gas.species():
        name = sp.name
        tr = sp.transport

        if tr is None:
            print(f"Skipping {name}: no transport data")
            continue

        geometry = tr.geometry if hasattr(tr, "geometry") else "nonlinear"
        well_depth = getattr(tr, "well_depth", 0.0)
        diameter = getattr(tr, "diameter", 0.0)
        dipole = getattr(tr, "dipole", 0.0)
        polar = getattr(tr, "polarizability", 0.0)
        rot_relax = getattr(tr, "rotational_relaxation", 0.0)

        f.write(f"{name}\n{{\n")
        f.write(f"    geometry              {geometry};\n")
        f.write(f"    LennardJonesWellDepth {well_depth:.3f};\n")
        f.write(f"    LennardJonesDiameter  {diameter:.3f};\n")
        f.write(f"    dipoleMoment          {dipole:.3f};\n")
        f.write(f"    polarizability        {polar:.3f};\n")
        f.write(f"    rotRelax              {rot_relax:.3f};\n")
        f.write("}\n\n")


