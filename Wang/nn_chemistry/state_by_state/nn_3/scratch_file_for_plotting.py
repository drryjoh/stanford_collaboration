import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt('output.txt')

iteration = data[:, 0]
temperature = data[:, 1]

# Create the plot
plt.plot(iteration, temperature)

# Label the axes
plt.xlabel('Iteration #')
plt.ylabel('Tempearture [K]')

# Add a title
plt.title('Homorgeneous Reactor using NN T = 2500, H2:0.6, O2: 0.38, OH: 0.01, H:0.01')

# Display the plot
plt.show()
print(temperature)