import numpy as np
import matplotlib.pyplot as plt
import cantera as ct

mech_file ='ffcm2_h2.yaml'
gas = ct.Solution(mech_file)

n_data_sets = 10
folder  = "data"

color_idx = np.linspace(0,1,n_data_sets)
axes = []
[axes.append(plt.subplots()[1]) for i in range(gas.n_species)]
[axes[i].set_ylabel("$Y_{{{specie}}}$".format(specie = gas.species_names[i])) for i in range(gas.n_species)]
[axes[i].set_xlabel("x [m]") for i in range(gas.n_species)]
plt.figure()
for k, phi in enumerate(np.linspace(0.3,2.0,n_data_sets)):
    data = np.load(f"{folder}/data_{k}.npy")
    x = data[0]
    T = data[1]
    plt.plot(x,T,color = plt.cm.jet(color_idx[k]))
    plt.plot(x,T,color = plt.cm.jet(color_idx[k]))
    plt.xlabel("x [m]")
    plt.ylabel("Temperature [k]")
    for i, name in enumerate(gas.species_names):
        axes[i].plot(x, data[2+i], color = plt.cm.jet(color_idx[k]))
plt.savefig("Temperature.png",dpi=300)
for i, ax in enumerate(axes):
    fig = ax.figure  # Get the figure associated with the Axes
    fig.savefig(f"{folder}/species_{gas.species_names[i]}.png", dpi=300)
    plt.close(fig)  # Close the figure to free memory
