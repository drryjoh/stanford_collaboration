#!python3
import numpy as np
import cantera as ct
import matplotlib.pyplot as plt
loaded = np.loadtxt('./refinement_level_3/6.70000000001e-05/consolidated_with_xy_NN_training.csv', delimiter=",")
length = 0.1
x = loaded[:,0];
I = np.argsort(x)[::-1]
sorted = loaded[I,:]
i = 0
#x y T p
xloc = -1
xlocs = []
for line in sorted:
    T = line[2]
    if T>500:
        xlocs.append(line[0])

xloc = np.max(np.array(xlocs))
updated = []
for line in sorted:
    if line[0] < xloc and line[0]>xloc-length:
        if line[2] > 1500:
            updated.append(line)
updated = np.array(updated)
np.save("nn_input_postshock_states.npy", updated[:,2:])
print(np.shape(updated))

plt.plot(updated[:,0],updated[:,1],'ok',markersize=1)
plt.show()
