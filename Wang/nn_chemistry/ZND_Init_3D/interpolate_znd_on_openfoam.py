import pandas as pd
import numpy as np
from scipy.interpolate import CubicSpline
import matplotlib.pyplot as plt

# Load OpenFOAM mesh data and ZND reference data
openfoam_data = pd.read_csv('consolidated_with_xy_znd.csv', skiprows=0)
znd_data = pd.read_csv('ffcm2ethylene_ZND_solution.csv', delim_whitespace=True)
znd_data = znd_data.sort_values(by=znd_data.columns[0])

# Add thermo + species columns
species_list = [
    'T','P','H2','H','O','O2','OH','H2O','HO2','CH','CH2','CH2(S)','CH3','CH4',
    'CO','CO2','HCO','CH2O','CH3O','C2H','C2H2','C2H3','C2H4','C2H5','C2H6',
    'HCCO','CH2CO','CH3CO','H2CC','PC3H4','C3H3','N2','Vx'
]
for s in species_list:
    openfoam_data[s] = 0.0

# Quick check spline
x_test = np.linspace(0,0.18,1000)
x_for_interp_from_znd = znd_data.iloc[:, 0].values
other_data_from_znd = znd_data.iloc[:, 1:].values
spline = CubicSpline(x_for_interp_from_znd, other_data_from_znd[:, 1])

plt.plot(x_test, spline(x_test))
plt.figure()
plt.plot(openfoam_data.iloc[:, 0], openfoam_data.iloc[:, 1])

# RNG for reproducibility
rng = np.random.default_rng(seed=0)

# Loop through mesh cells
for index, row in openfoam_data.iterrows():
    x_cell = row.iloc[0]   # x
    y_cell = row.iloc[1]   # y
    z_cell = row.iloc[2]   # z (must exist in CSV!)

    # Perturbation in y
    perturb_y = sum(
        0.001 * rng.uniform(0.5, 1.5) *
        np.sin(2 * np.pi * rng.uniform(1, 20) * y_cell / 0.18 + rng.uniform(0, 2*np.pi))
        for _ in range(20)
    )

    # Perturbation in z
    perturb_z = sum(
        0.001 * rng.uniform(0.5, 1.5) *
        np.sin(2 * np.pi * rng.uniform(1, 20) * z_cell / 0.18 + rng.uniform(0, 2*np.pi))
        for _ in range(20)
    )

    # Wrinkled flame front
    x_front = perturb_y + perturb_z + 0.05

    # Fill thermo/species fields
    if x_cell < x_front:
        # Inside burned region -> interpolate from ZND
        distance_behind = x_front - x_cell
        interpolated_values = []
        for col in range(other_data_from_znd.shape[1]):
            spline = CubicSpline(x_for_interp_from_znd, other_data_from_znd[:, col])
            interpolated_values.append(spline(distance_behind))
        interpolated_row = [x_cell] + interpolated_values
    else:
        # Unburned initial mixture
        interpolated_row = np.array([
            x_cell, 20265, 298, 0.24138457638029898, 0.0, 0.0, 0.0, 0.0,
            0.4065751, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
            0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.1188205, 0.0, 0.0, 0.0, 0.0,
            0.0, 0.0, 0.0, 0.0, 0.4746044
        ])

    # --- Mapping block (aligns ZND columns to OpenFOAM fields) ---
    openfoam_data.at[index, openfoam_data.columns[3]]  = interpolated_row[1]  # press
    openfoam_data.at[index, openfoam_data.columns[2]]  = interpolated_row[2]  # temp
    openfoam_data.at[index, openfoam_data.columns[4]]  = interpolated_row[5]  # H
    openfoam_data.at[index, openfoam_data.columns[5]]  = interpolated_row[6]  # H2
    openfoam_data.at[index, openfoam_data.columns[6]]  = interpolated_row[7]  # O
    openfoam_data.at[index, openfoam_data.columns[7]]  = interpolated_row[8]  # O2
    openfoam_data.at[index, openfoam_data.columns[8]]  = interpolated_row[9]  # OH
    openfoam_data.at[index, openfoam_data.columns[9]]  = interpolated_row[10] # H2O
    openfoam_data.at[index, openfoam_data.columns[10]] = interpolated_row[11] # HO2
    openfoam_data.at[index, openfoam_data.columns[11]] = interpolated_row[12] # H2O2
    openfoam_data.at[index, openfoam_data.columns[12]] = interpolated_row[13] # Ar
    openfoam_data.at[index, openfoam_data.columns[13]] = interpolated_row[14] # Ar
    openfoam_data.at[index, openfoam_data.columns[14]] = interpolated_row[15] # H
    openfoam_data.at[index, openfoam_data.columns[15]] = interpolated_row[16] # H2
    openfoam_data.at[index, openfoam_data.columns[16]] = interpolated_row[17] # O
    openfoam_data.at[index, openfoam_data.columns[17]] = interpolated_row[18] # O2
    openfoam_data.at[index, openfoam_data.columns[18]] = interpolated_row[19] # OH
    openfoam_data.at[index, openfoam_data.columns[19]] = interpolated_row[20] # H2O
    openfoam_data.at[index, openfoam_data.columns[20]] = interpolated_row[21] # HO2
    openfoam_data.at[index, openfoam_data.columns[21]] = interpolated_row[22] # H2O2
    openfoam_data.at[index, openfoam_data.columns[22]] = interpolated_row[23] # Ar
    openfoam_data.at[index, openfoam_data.columns[23]] = interpolated_row[24] # Ar
    openfoam_data.at[index, openfoam_data.columns[24]] = interpolated_row[25] # H
    openfoam_data.at[index, openfoam_data.columns[25]] = interpolated_row[26] # H2
    openfoam_data.at[index, openfoam_data.columns[26]] = interpolated_row[27] # O
    openfoam_data.at[index, openfoam_data.columns[27]] = interpolated_row[28] # O2
    openfoam_data.at[index, openfoam_data.columns[28]] = interpolated_row[29] # OH
    openfoam_data.at[index, openfoam_data.columns[29]] = interpolated_row[30] # H2O
    openfoam_data.at[index, openfoam_data.columns[30]] = interpolated_row[31] # HO2
    openfoam_data.at[index, openfoam_data.columns[31]] = interpolated_row[32] # H2O2
    openfoam_data.at[index, openfoam_data.columns[32]] = interpolated_row[33] # Ar
    openfoam_data.at[index, openfoam_data.columns[33]] = interpolated_row[34] # Ar
    openfoam_data.at[index, openfoam_data.columns[34]] = interpolated_row[4]  # Velocity

# Save to CSV
openfoam_data.to_csv('initialization_for_openfoam.csv', index=False)