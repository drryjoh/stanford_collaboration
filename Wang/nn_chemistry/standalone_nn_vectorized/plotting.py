import matplotlib.pyplot as plt
import pandas as pd
import cantera as ct
import numpy as np

# Species names as provided
species_names = ["H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2"]

# Load data
df = pd.read_csv("output.csv", header=None)

# Extract columns
time = df[0]
temperature = df[1]  # Temperature is column 1
pressure = df[2]  # Pressure is column 2
species_inputs = df.iloc[:, 3:]  # 8 species concentrations start from column 3

# === Create a 2x5 grid for T, P, and species ===
fig, axes = plt.subplots(nrows=2, ncols=5, figsize=(18, 8), sharex=True)

# Plot Temperature (T) on the first subplot in the first row
axes[0, 0].plot(time, temperature, label='Temperature (K)', color='tab:red')
axes[0, 0].set_title("Temperature (T)")
axes[0, 0].set_ylabel("Temperature (K)")
axes[0, 0].grid(True)

# Plot Pressure (P) on the second subplot in the first row
axes[0, 1].plot(time, pressure, label='Pressure (Pa)', color='tab:blue')
axes[0, 1].set_title("Pressure (P)")
axes[0, 1].set_ylabel("Pressure (Pa)")
axes[0, 1].grid(True)

# Plot each species in the first row (columns 3, 4, 5)
for i in range(3):
    axes[0, i+2].plot(time, species_inputs.iloc[:, i], label=f'{species_names[i]} Concentration', color=f'C{i}')
    axes[0, i+2].set_title(f'{species_names[i]} Concentration')
    axes[0, i+2].set_ylabel("Concentration")
    axes[0, i+2].grid(True)

# Plot each species in the second row (columns 1 to 5)
for i in range(3, 8):
    axes[1, i-3].plot(time, species_inputs.iloc[:, i], label=f'{species_names[i]} Concentration', color=f'C{i}')
    axes[1, i-3].set_title(f'{species_names[i]} Concentration')
    axes[1, i-3].set_xlabel("Time (s)")
    axes[1, i-3].set_ylabel("Concentration")
    axes[1, i-3].grid(True)

# Title for the entire figure
fig.suptitle("Time Series of Temperature, Pressure, and Species Concentrations", fontsize=16)

# Adjust layout to prevent overlap
fig.tight_layout(rect=[0, 0.03, 1, 0.95])

# Save the 2x5 grid plot
plt.savefig("temp_pressure_species_2x5_grid.png")  # Save as PNG
plt.close()

################################

import cantera as ct
import numpy as np
import matplotlib.pyplot as plt

# Create a Cantera gas mixture (use a simple ideal gas mixture for this example)
gas = ct.Solution('FFCM2_H2_Ar.yaml')  # You can use another mechanism if desired

# Initial conditions
gas.TPX = 2600, 2*101325, "H2:2, O2:1, Ar:7"  # Initial temperature (K) and pressure (Pa)

# Create a reactor and add the gas mixture
reactor = ct.IdealGasReactor(gas)

# Create a reactor network and set time step and duration
sim = ct.ReactorNet([reactor])
time_end = 1e-4  # seconds
n_points = 10000
times = np.linspace(0, time_end, n_points)

# Initialize arrays for results
temperature = np.zeros(n_points)
pressure = np.zeros(n_points)
species_concentrations = np.zeros((n_points, gas.n_species))

# Run the simulation
for i, t in enumerate(times):
    sim.advance(t)  # Advance the solution by time step
    temperature[i] = reactor.T  # Record temperature
    pressure[i] = reactor.thermo.P  # Record pressure
    species_concentrations[i, :] = reactor.thermo.X  # Record species concentrations

# Species names
species_names = gas.species_names

# === Plotting the results on a 2x5 grid ===
fig, axes = plt.subplots(nrows=2, ncols=5, figsize=(18, 8), sharex=True)

# Plot Temperature (T) on the first subplot in the first row
axes[0, 0].plot(times, temperature, label='Temperature (K)', color='tab:red')
axes[0, 0].set_title("Temperature (T)")
axes[0, 0].set_ylabel("Temperature (K)")
axes[0, 0].set_ylim(2600, 3200)
axes[0, 0].grid(True)

# Plot Pressure (P) on the second subplot in the first row
axes[0, 1].plot(times, pressure, label='Pressure (Pa)', color='tab:blue')
axes[0, 1].set_title("Pressure (P)")
axes[0, 1].set_ylabel("Pressure (Pa)")
axes[0, 1].grid(True)

# Plot each species in the first row (columns 3, 4, 5)
for i in range(3):
    axes[0, i+2].plot(times, species_concentrations[:, i], label=f'{species_names[i]} Concentration', color=f'C{i}')
    axes[0, i+2].set_title(f'{species_names[i]} Concentration')
    axes[0, i+2].set_ylabel("Concentration")
    axes[0, i+2].grid(True)
    axes[0, i+2].set_ylim(0, 1)  # Ensure the species concentrations are between 0 and 1

# Plot each species in the second row (columns 1 to 5)
for i in range(3, 8):
    axes[1, i-3].plot(times, species_concentrations[:, i], label=f'{species_names[i]} Concentration', color=f'C{i}')
    axes[1, i-3].set_title(f'{species_names[i]} Concentration')
    axes[1, i-3].set_xlabel("Time (s)")
    axes[1, i-3].set_ylabel("Concentration")
    axes[1, i-3].grid(True)
    axes[1, i-3].set_ylim(0, 1)  # Ensure the species concentrations are between 0 and 1

# Title for the entire figure
fig.suptitle("Time Series of Temperature, Pressure, and Species Concentrations", fontsize=16)

# Adjust layout to prevent overlap
fig.tight_layout(rect=[0, 0.03, 1, 0.95])

# Save the 2x5 grid plot
plt.savefig("cantera_temp_pressure_species_2x5_grid.png")  # Save as PNG
plt.show()