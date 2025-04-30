from tensorflow.keras.models import load_model
import torch
import numpy as np

def boxcox(arr, lam=0.1):
    return (arr**lam - 1) / lam


def boxcox_inv(arr, lam=0.1):
    return (arr * lam + 1) ** (1 / lam)

def predict_combustion_5(input, nn_5):
    #for nn5
    mean_input5 = np.array([2919.4364554245954, 2.650459630025233, -5.2311709315835735, -4.088252171819475, -4.46170808746489, -2.850897566780981, -4.120616255902592, -3.485131339585899, -6.613365030486587, -7.573851436587735])
    std_input5 = np.array([512.6438702993934, 1.9156705341714577, 1.011477353923571, 0.35748944253661213, 1.4118521325464723, 0.5454943439472795, 1.4977449434303534, 1.7877920682967947, 0.6397854398262626, 0.37510374702759236])
    mean_output5 = np.array([-0.012065518267611236, 4.152060994339688e-06, 0.016707599303770037, -0.0003626669395628164, 0.01696693744783016, -0.000554305108856307, 0.01982642257885528, 0.017854331571357542, 0.02158795706196252, 0.01466893159907499])
    std_output5 = np.array([0.17712867543683497, 0.00030732879388217175, 0.13253264369065887, 0.000830248071376656, 0.11503699815358925, 0.0012165823027967687, 0.13031205415703587, 0.10242883431331506, 0.18755669133389144, 0.10923402864763193])

    input_state = np.concatenate([np.array([input[0], input[1]]), boxcox(np.maximum(input[2:], 0))])    # Box-Cox transform with lambda = 0.1 for elements from index 2 onward
    input_state = (input_state - mean_input5) / std_input5
    input_state = torch.FloatTensor(input_state.reshape(1, -1))
    model_output = nn_5(input_state)  # This function must return a shape-(11,) array-like
    output_real = model_output.numpy().flatten()

    output_real = output_real * std_output5 + mean_output5


    input_real = input_state.numpy().flatten()
    input_real = input_real * std_input5 + mean_input5
    output_real += input_real
    output_real[2:] = np.maximum(boxcox_inv(output_real[2:]), 0)
    return output_real