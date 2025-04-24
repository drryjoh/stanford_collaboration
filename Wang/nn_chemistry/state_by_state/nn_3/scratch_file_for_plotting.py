import numpy as np
import matplotlib.pyplot as plt
import cantera as ct

#Change path to mechanism of choice for cantera run. Use the same mechansim that was used in NN training
gas = ct.Solution("../../1D_detonation_AR_H2_O2/constant/H2_FFCM1_O3_Ar.yaml")


gas.TPX = 2500, 2*101325, "H2:2, O2:1, AR:7"
reactor = ct.IdealGasReactor(gas)
network = ct.ReactorNet([reactor])

# Make sure the timesteps here matches the time steps you simulated the NN for
n_steps = 5000 # Number of time steps
time_end = n_steps * 1e-9  # Convert ns to seconds

time = np.linspace(0, time_end, n_steps)

x = np.zeros((n_steps, 13))
#Order: "H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "O3", NOT "AR"
i = 0
for t in time:
    network.advance(t)
    x[i, 0] = network.time
    x[i, 1] = reactor.T
    x[i, 2] = reactor.thermo.P / 101325
    x[i, 3] = gas.mass_fraction_dict().get('H', 0.0)
    x[i, 4] = gas.mass_fraction_dict().get('H2', 0.0)
    x[i, 5] = gas.mass_fraction_dict().get('O', 0.0)
    x[i, 6] = gas.mass_fraction_dict().get('O2', 0.0)
    x[i, 7] = gas.mass_fraction_dict().get('OH', 0.0)
    x[i, 8] = gas.mass_fraction_dict().get('H2O', 0.0)
    x[i, 9] = gas.mass_fraction_dict().get('HO2', 0.0)
    x[i, 10] = gas.mass_fraction_dict().get('H2O2', 0.0)
    x[i, 11] = gas.mass_fraction_dict().get('O3', 0.0)
    x[i, 12] = gas.mass_fraction_dict().get('AR', 0.0)
    i = i+1

data = np.loadtxt('output.txt')

iteration = data[:, 0]
temps = data[:, 1]
pressure = data[:, 2]
y_H = data[:, 3]
y_H2 = data[:, 4]
y_O = data[:, 5]
y_O2 = data[:, 6]
y_OH = data[:, 7]
y_H2O = data[:, 8]
y_HO2 = data[:, 9]
y_H2O2 = data[:, 10]
y_O3 = data[:, 11]
y_Ar = 1 - (y_H + y_H2 + y_O + y_O2 + y_OH + y_H2O + y_HO2 + y_H2O2 + y_O3)

fig, axes = plt.subplots(nrows=6, ncols=2)
axes = axes.flatten()  # Flatten to make indexing easier

# Flatten axes array for easier indexing
axes = axes.flatten()

axes[0].plot(x[:,0], x[:,1], label='Cantera')
axes[0].plot(x[:,0], temps, label='NN')
axes[0].set_title('Temperature [K]')
axes[0].legend()

axes[1].plot(x[:,0], x[:,2], label='Cantera')
axes[1].plot(x[:,0], pressure, label='NN')
axes[1].set_title('Pressure [atm]')
axes[1].legend()

axes[2].plot(x[:,0], x[:,3], label='Cantera')
axes[2].plot(x[:,0], y_H, label='NN')
axes[2].set_title('H')
axes[2].legend()

axes[3].plot(x[:,0], x[:,4], label='Cantera')
axes[3].plot(x[:,0], y_H2, label='NN')
axes[3].set_title('H2')
axes[3].legend()


axes[4].plot(x[:,0], x[:,5], label='Cantera')
axes[4].plot(x[:,0], y_O, label='NN')
axes[4].set_title('O')
axes[4].legend()


axes[5].plot(x[:,0], x[:,6], label='Cantera')
axes[5].plot(x[:,0], y_O2, label='NN')
axes[5].set_title('O2')
axes[5].legend()

axes[6].plot(x[:,0], x[:,7], label='Cantera')
axes[6].plot(x[:,0], y_OH, label='NN')
axes[6].set_title('OH')
axes[6].legend()

axes[7].plot(x[:,0], x[:,8], label='Cantera')
axes[7].plot(x[:,0], y_H2O, label='NN')
axes[7].set_title('H2O')
axes[7].legend()

axes[8].plot(x[:,0], x[:,9], label='Cantera')
axes[8].plot(x[:,0], y_HO2, label='NN')
axes[8].set_title('HO2')
axes[8].legend()

axes[9].plot(x[:,0], x[:,10], label='Cantera')
axes[9].plot(x[:,0], y_H2O2, label='NN')
axes[9].set_title('H2O2')
axes[9].legend()

axes[10].plot(x[:,0], x[:,11], label='Cantera')
axes[10].plot(x[:,0], y_O3, label='NN')
axes[10].set_title('O3')
axes[10].legend()

axes[11].plot(x[:,0], x[:,12], label='Cantera')
axes[11].plot(x[:,0], y_Ar, label='NN')
axes[11].set_title('Ar')
axes[11].legend()
 
fig.subplots_adjust(wspace=0.4, hspace=0.6)
plt.show()

# Save the figure
#fig.savefig("NN_3 Comparison")  # Will save next to your script