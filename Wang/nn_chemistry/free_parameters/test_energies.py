#!python3
import cantera as ct
import numpy as np

gas = ct.Solution("FFCM2_H2_AR.yaml")
initial_conditions = 1950, 180000, "AR:7, H2:2, O2:1"
gas.TPX  = initial_conditions

rho = gas.density                          # [kg/m³]
Y = gas.Y                                  # mass fractions
for d in dir(gas):
    print(d)
u_mass = np.array([gas.species(i).thermo.u(gas.T) for i in range(gas.n_species)])  # [J/kg]

# Compute volume-specific internal energy per species
u_density_per_species = Y * rho * u_mass  # [J/m³] for each species

# Optional: Print nicely
for i, u_i in enumerate(u_density_per_species):
    print(f"{gas.species_names[i]}: {u_i:.2f} J/m³")
