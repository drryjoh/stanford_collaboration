import numpy as np
import matplotlib.pyplot as plt
import os
import sys

x = np.load("x.npy")
T = np.load("T.npy")
plt.figure(figsize=(8, 6))

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
start_idx = 100
n_dirs = len(time_dirs)
n_plots = n_dirs - start_idx
color_idx = np.linspace(0,1,n_plots)

for i, time in enumerate(time_dirs):
    file_path = os.path.join(base_path, time, "lineX1_T.xy")
    times.append(float(time))
    # Check if file exists
    if os.path.exists(file_path) and i >= start_idx:
        data = np.loadtxt(file_path)  # Load space-separated values
        xof = data[:, 0]  # First column is x
        Tof = data[:, 1]  # Third column is temperature (T)

        end_idx = len(Tof)
        for k, Ti in enumerate(Tof[::-1]):
            if Ti>300:
                front_idx = end_idx-k
                break
        plt.plot(xof[front_idx]-xof,Tof,color=plt.cm.jet(color_idx[i - start_idx]))
plt.plot(x,T,'--r',label='SD Toolbox')
plt.xlim([-0.01,1.5])
plt.ylim([1500,3000])
plt.xlabel("distance [m] behind shock")
plt.ylabel("Temperature [K]")
plt.savefig("detonation_compare.png",dpi=300)
plt.show()
