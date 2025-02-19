import os
import numpy as np
import matplotlib.pyplot as plt

# Path to postProcessing directory
base_path = "postProcessing/sets"

# Get all time directories (sorted numerically)
time_dirs = sorted([d for d in os.listdir(base_path) if os.path.isdir(os.path.join(base_path, d))], key=float)

# Initialize figure

# Loop through each time directory and read data
color_idx = np.linspace(0,1,len(time_dirs))
file_path = ''
idxs = []
xs = []
times = []
files = []
for i, time in enumerate(time_dirs):
    file_path = os.path.join(base_path, time, "lineX1_p_T_H2_OH_H2O_O2_H2O2_UseNN.xy")
    # Check if file exists
    if os.path.exists(file_path):
        files.append(file_path)
        times.append(float(time))
files  = files[:int(len(files)/2)]
files = files[::4]
color_idx = np.linspace(0,1,len(files))

fig1, ax1 = plt.subplots()
fig2, ax2 = plt.subplots()
#ax2 = ax1.twinx()
x = 0
T = 0
for i, file in enumerate(files):
    data = np.loadtxt(file)  # Load space-separated values
    x = data[:, 0]  # First column is x
    T = data[:, 2]  # Third column is temperature (T)
    useNN = data[:, -1]  # Third column is temperature (T)
    ax1.plot(x, T, label=f"Time {time}",color=plt.cm.jet(color_idx[i]))
    ax2.plot(x, useNN, label=f"Time {time}",color=plt.cm.jet(color_idx[i]))
np.save("Tdet_nn.npy",T)
np.save("xdet_nn.npy",x)
plt.show()

