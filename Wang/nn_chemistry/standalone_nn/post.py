#!python3
import numpy as np
import matplotlib.pyplot as plt
import cantera as ct

gas = ct.Solution("FFCM2_H2_Ar.yaml")
dat = np.loadtxt("output_with_sdt.txt", delimiter=',')

temp = 2600
pres = 4
spec = "H2:2, O2:1, AR:7"
gas.TPX = temp, pres * ct.one_atm, spec
r = ct.IdealGasReactor(gas)
sim = ct.ReactorNet([r])
t_end = 100000 * 1e-9
states = ct.SolutionArray(gas, extra=["time"])
while sim.time < t_end:
    sim.step()
    states.append(r.thermo.state, time=sim.time)

time = dat[:,0]
T = dat[:,1]

plt.plot(time, T,'-k')
plt.plot(states.time, states.T,'--r')

for k, specie in enumerate(gas.species_names):
    plt.figure()
    plt.plot(time, dat[:, 3 + k], '-k')
    plt.plot(states.time, states.concentrations[:,k], '--r')
plt.show()