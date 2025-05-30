import cantera as ct
import numpy as np
import matplotlib.pyplot as plt
import torch
from torch import nn
from ffcm import nn_training, nn_models


#Load NN Model and define its evaluation
input_dim = 10
output_dim = 10
nn_input_dict = {
    "input_dim": input_dim,
    "hidden_dims": [1024, 10, 1024],
    "output_dim": output_dim,
    "dropout_prob": 0.0,
    "activation_function": nn.ReLU(),
    "torch_init": False,
    "torch_init_gain": np.sqrt(2),
}

model = nn_models.DNN(**nn_input_dict)
model.load_state_dict(torch.load("./Case28/NN1_lr4/state_dict.pth"))

state_dict = model.state_dict()
W0 = state_dict["linear_layers.0.weight"].numpy()
b0 = state_dict["linear_layers.0.bias"].numpy()
W1 = state_dict["linear_layers.1.weight"].numpy()
b1 = state_dict["linear_layers.1.bias"].numpy()
W2 = state_dict["linear_layers.2.weight"].numpy()
b2 = state_dict["linear_layers.2.bias"].numpy()
W3 = state_dict["linear_layers.3.weight"].numpy()
b3 = state_dict["linear_layers.3.bias"].numpy()

def evaluate_nn(input_data, W0, b0, W1, b1, W2, b2, W3, b3):
    z1 = input_data @ W0.T + b0.reshape(1, -1)
    a1 = np.maximum(z1, 0)
    z2 = a1 @ W1.T + b1.reshape(1, -1)
    a2 = np.maximum(z2, 0)
    z3 = a2 @ W2.T + b2.reshape(1, -1)
    a3 = np.maximum(z3, 0)
    z4 = a3 @ W3.T + b3.reshape(1, -1)
    return z4

#Compute RRs
openfoam_states = np.loadtxt('consolidated_with_xy_NN_training.csv', delimiter=',')

RRs = []
# Loop through each line (row)
gas = ct.Solution("./FFCM2_H2_Ar.yaml")
mean_input = np.loadtxt("./Case28/mean_input.txt")
std_input = np.loadtxt("./Case28/std_input.txt")
mean_output = np.loadtxt("./Case28/mean_output.txt")
std_output = np.loadtxt("./Case28/std_output.txt")
for row in openfoam_states:
    gas.TPY = row[2], row[3], row[4:]
    input_state = np.concatenate([[gas.T, gas.P / ct.one_atm], gas.concentrations[:-1]])
    input_state = (input_state - mean_input) / std_input
    input_state = input_state.reshape(1, -1)
    output_state = evaluate_nn(input_state, W0, b0, W1, b1, W2, b2, W3, b3)
    output_real = output_state.flatten()
    output_real = output_real * std_output + mean_output
    input_real = input_state.flatten()
    input_real = input_real * std_input + mean_input
    output_real += input_real
    RR = ((output_real[2:] - input_real[2:]) / 1e-9) * gas.molecular_weights[:-1]
    RRs.append(RR)
combined = np.hstack((openfoam_states, RRs))
header = 'X,Y,T,P,YH,YH2,YO,YO2,YOH,YH2O,YHO2,YH2O2,YAR,RRPYH,RRPYH2,RRPYO,RRPYO2,RRPYOH,RRPYH2O,RRPYHO2,RRPYH2O2'

np.savetxt('consolidated_with_RRs.csv', combined, delimiter=',', fmt='%.6f',header=header,comments='')
