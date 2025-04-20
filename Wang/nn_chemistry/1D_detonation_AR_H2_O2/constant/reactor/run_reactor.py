#!python3
import numpy as np
import cantera as ct
import matplotlib.pyplot as plt

gas = ct.Solution("../H2_FFCM1_O3_Ar.yaml")


gas.TPX = 1950, 1*101325, "H2:2, O2:1, AR:7"
reactor = ct.IdealGasReactor(gas)
network = ct.ReactorNet([reactor])

n_steps = 5000 # Number of time steps
time_end = n_steps * 1e-9  # Convert ns to seconds

time = np.linspace(0, time_end, n_steps)
data = []
for t in time:
    network.advance(t)
    data.append([t, reactor.T])
data = np.array(data)
plt.plot(data[:,0], data[:,1],'-k')

plt.show()
