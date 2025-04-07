import cantera as ct
import numpy as np

mech_file ='ffcm2_h2.yaml'
folder  = 'data'
n_data_sets = 10
gas = ct.Solution(mech_file)
fuel = {'H2': 1.0}  # Pure H2 fuel
oxidizer = {'O2': 1.0, 'N2': 3.76}  # Air as oxidizer (O2/N2 ratio of air)
temperature = 300.0
pressure  = 1.0 #atm
phi = 1.0  # Stoichiometric mixture

# Set the composition based on
for k, phi in enumerate(np.linspace(0.3,1.3,n_data_sets)):
    gas.set_equivalence_ratio(phi, fuel, oxidizer)
    gas.TP =  temperature, pressure*ct.one_atm

    f = ct.FreeFlame(gas, width=None)
    f.inlet.T = temperature
    f.P = pressure * ct.one_atm
    f.inlet.X = gas.X

    f.set_refine_criteria(ratio=2, slope=0.02, curve=0.02, prune=1e-4)
    f.transport_model = "Mix"
    f.solve(loglevel=0, refine_grid=True, auto=False)
    data = np.vstack([f.grid,f.T,f.Y,f.velocity])
    np.save(f"{folder}/data_{k}.npy", data)
