import pandas as pd
import numpy as np
from scipy.interpolate import CubicSpline
import numpy as np
import matplotlib.pyplot as plt

openfoam_data = pd.read_csv('consolidated_with_xy_znd.csv', skiprows=0)
znd_data = pd.read_csv('ffcm2hydrogen_ZND_solution.csv', delim_whitespace=True)
znd_data = znd_data.sort_values(by=znd_data.columns[0])

#First add two columns to openfoam data to house V and density
openfoam_data['T'] = 0.0
openfoam_data['P'] = 0.0
openfoam_data['H'] = 0.0
openfoam_data['H2'] = 0.0
openfoam_data['O'] = 0.0
openfoam_data['O2'] = 0.0
openfoam_data['OH'] = 0.0
openfoam_data['H2O'] = 0.0
openfoam_data['HO2'] = 0.0
openfoam_data['H2O2'] = 0.0
openfoam_data['Ar'] = 0.0
openfoam_data['Vx'] = 0.0

x_test = np.linspace(0,0.06,1000)
x_for_interp_from_znd = znd_data.iloc[:, 0].values 
other_data_from_znd = znd_data.iloc[:, 1:].values
spline = CubicSpline(x_for_interp_from_znd, other_data_from_znd[:, 1])

plt.plot(x_test, spline(x_test))
plt.figure()
plt.plot(openfoam_data.iloc[:, 0], openfoam_data.iloc[:, 1])

for index, row in openfoam_data.iterrows():
    x_cell = row.iloc[0]
    y_cell = row.iloc[1]
    rng = np.random.default_rng(seed=42)
    x_front = sum(0.001 * rng.uniform(0.5, 1.5) * np.sin(2 * np.pi * rng.uniform(1, 20) * y_cell / 0.06 + rng.uniform(0, 2*np.pi)) for _ in range(20)) + 0.05
    interpolated_row = np.array([])
    if  x_cell < x_front:
        distance_behind = x_front - x_cell
        #Cubic Spline Interpolation
        x_for_interp_from_znd = znd_data.iloc[:, 0].values 
        other_data_from_znd = znd_data.iloc[:, 1:].values  
        interpolated_values = []
        for col in range(other_data_from_znd.shape[1]):
            spline = CubicSpline(x_for_interp_from_znd, other_data_from_znd[:, col])
            interpolated_values.append(spline(distance_behind)) 
        interpolated_row = [x_cell] + interpolated_values 
    else:
        #Initial Conditions
        #"X" "Pressure" "Temperature" "Density" "Velocity" "H" "H2" "O" "O2" "OH" "H2O" "HO2" "H2O2" "AR" (confirmed same order in openfoam: #Order: "H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "AR")
        interpolated_row = np.array([x_cell, 6670, 298, 0.084981, 0.0, 0.0, 0.01277243, 0.0, 0.10136214, 0.0, 0.0, 0.0, 0.0, 0.88586543])

    openfoam_data.at[index, openfoam_data.columns[3]] = interpolated_row[1] #press
    openfoam_data.at[index, openfoam_data.columns[2]] = interpolated_row[2] #temp
    openfoam_data.at[index, openfoam_data.columns[4]] = interpolated_row[5] #H
    openfoam_data.at[index, openfoam_data.columns[5]] = interpolated_row[6] #H2
    openfoam_data.at[index, openfoam_data.columns[6]] = interpolated_row[7] #O
    openfoam_data.at[index, openfoam_data.columns[7]] = interpolated_row[8] #O2
    openfoam_data.at[index, openfoam_data.columns[8]] = interpolated_row[9] #OH
    openfoam_data.at[index, openfoam_data.columns[9]] = interpolated_row[10] #H2O
    openfoam_data.at[index, openfoam_data.columns[10]] = interpolated_row[11] #HO2
    openfoam_data.at[index, openfoam_data.columns[11]] = interpolated_row[12] #H2O2
    openfoam_data.at[index, openfoam_data.columns[12]] = interpolated_row[13] #Ar
    openfoam_data.at[index, openfoam_data.columns[13]] = interpolated_row[4] #Velocity

openfoam_data.to_csv('initialization_for_openfoam.csv', index=False)