import numpy as np
import torch
from tensorflow.keras.models import load_model
import cantera as ct
import matplotlib.pyplot as plt
from predict import *

nn_5 = load_model("NN5.h5") #uses ffcm1 and has ozone

#Change to desired initial conditions
#Order: T, P (atm) "H", "H2", "O", "O2", "OH", "H2O", "HO2", "H2O2", "O3", NOT "AR"
gas = ct.Solution("FFCM2_H2_AR.yaml")
gas.TPX = 1950, 180000, "AR:7, H2:2, O2:1"

useNN = True
useCantera = True
nn_result = np.zeros(gas.n_species + 1) #Species - 2 + T + P = n_species total variables
cantera_result = np.zeros(gas.n_species + 1)

Y_AR = 0.8858587999

if useNN == True:   #USE NN switch value here to change frequency of cantera usage. i % 10 uses cantera once every 10 timesteps
    T = gas.T
    P = gas.P
    Y = gas.Y
    input = np.array([T, P/101325, *Y[:-1]])
    next_state = predict_combustion_5(input, nn_5)
    T = next_state[0]
    P = next_state[1] * 101325
    Y_nn = next_state[2:]
    #Note for Ryan: Kevin does NOT normalize like this with a run sum after NN output. Not sure if we should continue doing this.
    # Start with Ar mass fraction
    run_sum = Y_AR
    # Zero out negatives and accumulate the sum from index 2 to 10
    for j in range(len(Y_nn)):
        Y_nn[j] = max(0.0, Y_nn[j])
        run_sum += Y_nn[j]
    # Normalize elements from index 2 to 10 so total sum = 1
    Y = np.append(Y_nn, Y_AR)
    for j in range(len(Y_nn)):
        Y_nn[j] = Y_nn[j] / run_sum
    gas.TPY = T, P, Y

    nn_result = next_state


if useCantera == True:  
    reactor = ct.IdealGasReactor(gas)
    network = ct.ReactorNet([reactor])
    dt = 1e-9
    network.advance(dt)
    cantera_result[0] = reactor.T
    cantera_result[1] = reactor.thermo.P / 101325
    cantera_result[2] = gas.mass_fraction_dict().get('H', 0.0)
    cantera_result[3] = gas.mass_fraction_dict().get('H2', 0.0)
    cantera_result[4] = gas.mass_fraction_dict().get('O', 0.0)
    cantera_result[5] = gas.mass_fraction_dict().get('O2', 0.0)
    cantera_result[6] = gas.mass_fraction_dict().get('OH', 0.0)
    cantera_result[7] = gas.mass_fraction_dict().get('H2O', 0.0)
    cantera_result[8] = gas.mass_fraction_dict().get('HO2', 0.0)
    cantera_result[9] = gas.mass_fraction_dict().get('H2O2', 0.0)
    # cantera_result[i, 12] = gas.mass_fraction_dict().get('AR', 0.0)

#graphically displaying result
difference = cantera_result - nn_result
print(difference)
x = np.arange(len(difference))
plt.bar(x, difference)
plt.axhline(0, color='black', linewidth=0.8)
plt.xlabel('Data Point Index')
plt.ylabel('Difference')
plt.title('Difference Between Cantera and NN')
plt.show()