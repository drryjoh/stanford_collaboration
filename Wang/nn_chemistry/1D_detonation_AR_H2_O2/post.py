import os
import numpy as np
import matplotlib.pyplot as plt

# Path to postProcessing directory
base_path = "postProcessing/lineSampler"

# Get all time directories (sorted numerically)
time_dirs = sorted([d for d in os.listdir(base_path) if os.path.isdir(os.path.join(base_path, d))], key=float)

# Initialize figure
plt.figure(figsize=(8, 6))

# Loop through each time directory and read data
color_idx = np.linspace(0,1,len(time_dirs))
file_path = ''
T = 0
x = 0
idxs = []
xs = []
times = []
for i, time in enumerate(time_dirs):
    file_path = os.path.join(base_path, time, "lineSample_p_T_H2_OH_H2O_O2_H2O2_Qdot.xy")
    times.append(float(time))
    # Check if file exists
    if os.path.exists(file_path):
        data = np.loadtxt(file_path)  # Load space-separated values
        x = data[:, 0]  # First column is x
        T = data[:, 2]  # Third column is temperature (T)

# Plot temperature vs. x for this time step
        plt.plot(x, T, label=f"Time {time}",color=plt.cm.jet(color_idx[i]))
        lenT = len(T)
        for i, Ti in enumerate(T[::-1]):
            if Ti>350:
                idxs.append(lenT - i)
                xs.append(x[lenT - i])
                break
# Formatting the plot
        plt.xlabel("x (m)")
        plt.ylabel("Temperature (K)")
        plt.title("Temperature vs. Position (x)")
#plt.plot(x, T*0+1900, '--k')#,label=f"Time {time}",color=plt.cm.jet(color_idx[i]))
#plt.legend(ncol=2)
# Show the plot
np.save("Tdet.npy",T)
np.save("xdet.npy",x)
plt.figure()
xs = np.array(xs)
times = np.array(times)
plt.plot(times[1:], np.abs(np.diff(xs)/np.diff(times)), '-k')
plt.show()

