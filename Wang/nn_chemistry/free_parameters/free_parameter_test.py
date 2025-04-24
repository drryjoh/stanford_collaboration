#!python3
import numpy as np
import cantera as ct
import matplotlib.pyplot as plt
gas = ct.Solution("FFCM2_H2_AR.yaml")
import numpy as np

def inverse_3x3(A):
    A = np.asarray(A)
    if A.shape != (3, 3):
        raise ValueError("Matrix must be 3x3.")

    # Compute the determinant
    det = (
        A[0, 0] * (A[1, 1]*A[2, 2] - A[1, 2]*A[2, 1]) -
        A[0, 1] * (A[1, 0]*A[2, 2] - A[1, 2]*A[2, 0]) +
        A[0, 2] * (A[1, 0]*A[2, 1] - A[1, 1]*A[2, 0])
    )

    if abs(det) < 1e-12:
        raise ValueError("Matrix is singular or nearly singular.")

    # Compute cofactor matrix
    cof = np.zeros((3, 3))
    cof[0, 0] = +(A[1, 1]*A[2, 2] - A[1, 2]*A[2, 1])
    cof[0, 1] = -(A[1, 0]*A[2, 2] - A[1, 2]*A[2, 0])
    cof[0, 2] = +(A[1, 0]*A[2, 1] - A[1, 1]*A[2, 0])
    cof[1, 0] = -(A[0, 1]*A[2, 2] - A[0, 2]*A[2, 1])
    cof[1, 1] = +(A[0, 0]*A[2, 2] - A[0, 2]*A[2, 0])
    cof[1, 2] = -(A[0, 0]*A[2, 1] - A[0, 1]*A[2, 0])
    cof[2, 0] = +(A[0, 1]*A[1, 2] - A[0, 2]*A[1, 1])
    cof[2, 1] = -(A[0, 0]*A[1, 2] - A[0, 2]*A[1, 0])
    cof[2, 2] = +(A[0, 0]*A[1, 1] - A[0, 1]*A[1, 0])

    # Transpose of cofactor matrix = adjugate
    adj = cof.T

    # Inverse = adjugate / determinant
    return adj / det

def reference_solution(gas, initial_conditions):
    gas.TPX  = initial_conditions
    reactor = ct.IdealGasReactor(gas)
    network = ct.ReactorNet([reactor])

    time_end = 5e-5
    n_steps = int(1000)
    dt = time_end/n_steps
    time_end = n_steps * dt

    time = np.linspace(0, time_end, n_steps)

    temperature = []
    
    for t in time:
        network.advance(t)
        T = reactor.T
        temperature.append(T)

    temperature = np.array(temperature)
    return time, temperature

def sum_target(larger_array, indexes):
    return sum(val for i, val in enumerate(larger_array) if i not in indexes)

def free_parameter_solve(gas, initial_conditions, free_species = ["OH", "H2O", "O"]):
    gas.TPX  = initial_conditions
    idx_a = gas.species_index(free_species[0])
    idx_b = gas.species_index(free_species[1])
    idx_c = gas.species_index(free_species[2])
    indexes = [idx_a, idx_b, idx_c]
    MW = gas.molecular_weights

    reactor = ct.IdealGasReactor(gas)
    network = ct.ReactorNet([reactor])

    time_end = 5e-5
    n_steps = int(1000)
    dt = time_end/n_steps
    time_end = n_steps * dt

    time = np.linspace(0, time_end, n_steps)

    temperature = []
    for t in time:
        #get conserverd variables
        #these are globally conserved so can be removed from the for loop if desired
        density = reactor.thermo.density
        internal_energy_volume_specific = density * reactor.thermo.int_energy_mass  # [J/m³]
        
        network.advance(t) #replace with call to NN given YTP_n -> YTP_n+1
        T = reactor.T
        temperature.append(T)

        #these would be the new predictions
        T = reactor.T 
        P = reactor.thermo.P
        Y = reactor.thermo.Y


        #build RHS of linear system
        B1 = 1 - sum_target(Y, indexes)
        B2 = P/ct.gas_constant/T/density - sum_target(Y/MW, indexes)
        u_i  = reactor.thermo.standard_int_energies_RT * ct.gas_constant * reactor.T/MW
        B3 = (internal_energy_volume_specific - density * sum_target(Y * u_i, indexes))/density

        #build A of system
        A = np.array([[1,1,1],[1/MW[idx_a], 1/MW[idx_b], 1/MW[idx_c]],[u_i[idx_a], u_i[idx_b], u_i[idx_c]]])
        B = np.array([B1, B2, B3])

        #apply inverse
        Y_new = inverse_3x3(A) @ B 

        # Modify species bac
        Y_mod = Y.copy()
        Y_mod[idx_a] = Y_new[0]
        Y_mod[idx_b] = Y_new[1]
        Y_mod[idx_c] = Y_new[2]

        Y_mod /= Y_mod.sum()     # re-normalize to keep sum = 1

    # Apply the new state
        reactor.thermo.TPY = T, reactor.thermo.P, Y_mod
        reactor.syncState() #make sure you do this even if using the NN so you can get current 
    temperature = np.array(temperature)
    return time, temperature

initial_conditions = 1950, 180000, "AR:7, H2:2, O2:1"
time, temperature = reference_solution(gas, initial_conditions)
time_fp, temperature_fp = free_parameter_solve(gas, initial_conditions)

plt.plot(time, temperature, '-k')
plt.plot(time_fp, temperature_fp, '-r')
plt.show()