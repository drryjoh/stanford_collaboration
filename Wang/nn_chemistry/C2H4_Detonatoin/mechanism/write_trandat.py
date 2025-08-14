import cantera as ct

def write_transport_data(mech_file, output_file, transport_model="mixture-averaged"):
    gas = ct.Solution(mech_file, transport_model=transport_model)

    with open(output_file, 'w') as f:
        for i, sp in enumerate(gas.species()):
            name = sp.name

            # Defaults
            lj_index = 0
            mw = gas.molecular_weights[i]
            sigma = 0.0
            epsilon = 0.0
            dipole = 0.0
            polar = 0.0
            rotrelax = 0.0

            if sp.transport:
                trans = sp.transport
                sigma = getattr(trans, 'diameter', 0.0)
                well_depth = getattr(trans, 'well_depth', 0.0)
                epsilon = well_depth / ct.gas_constant if well_depth else 0.0
                dipole = getattr(trans, 'dipole', 0.0)
                polar = getattr(trans, 'polarizability', 0.0)
                rotrelax = getattr(trans, 'rotational_relaxation', 0.0)

            line = (f"{name:<18}"
                    f"{lj_index:>3}"
                    f"{mw:9.3f}"
                    f"{sigma:9.3f}"
                    f"{epsilon:9.3f}"
                    f"{dipole:9.3f}"
                    f"{polar:9.3f}"
                    f"{rotrelax:9.3f}\n")

            f.write(line)



if __name__ == "__main__":
    mech_file = "ffcmy9reduced30.yaml"  # Change to your mechanism file
    output_file = "trandat"
    write_transport_data(mech_file, output_file)
    print(f"Transport data written to {output_file}")
