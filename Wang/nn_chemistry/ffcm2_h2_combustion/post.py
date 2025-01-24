import numpy as np
import matplotlib.pyplot as plt
import cantera as ct

gas = ct.Solution("ffcm2_h2.yaml")

gas.TPY =1800.0, 5.0 * ct.one_atm, [0.0, 0.11190674, 0.0, 0.88809326, 0.0, 0.0, 0.0, 0.0, 0.0,]
reactor = ct.IdealGasReactor(gas)
sim = ct.ReactorNet([reactor])

t = 0
dt = 1e-9

T = [gas.T]
times = [t]
for i in range(1000):
    sim.advance(t + (i+1) * dt)
    T.append(gas.T)
    times.append(t + (i+1) * dt)


data = np.loadtxt("output.txt", delimiter=',')
plt.plot(data[:,0], data[:,1],'-k')
plt.plot(times, T, '--r')
plt.show()
