#!python3
import cantera as ct
import numpy as np
import matplotlib.pyplot as plt

# Load the reaction mechanism
gas = ct.Solution("semiglobal.yaml")

# Define initial conditions
test_conditions = {
    "temperature": 1400,  # K
    "pressure": 101325.0,  # Pa
    "species": {
        "CH4": 0.02,
        "H2":  0.02,
        "AR": 0.96
    }
}

gas.TPX = (
    test_conditions["temperature"],
    test_conditions["pressure"],
    test_conditions["species"]
)

# Create a reactor and insert the gas
reactor = ct.IdealGasMoleReactor(gas)
network = ct.ReactorNet([reactor])

# Define simulation time (in seconds)
cm = 0.01
s = 1
velocity = 2 * cm/s
L = 1

time_end = L/velocity
print(f"End time is {time_end*1000} ms")
dt_small = 0.001
n_steps = int(time_end/dt_small)
time = np.linspace(0, time_end, n_steps)

temperature = []
data = []
X = []
for t in time:
    network.advance(t)
    temperature.append(reactor.T)
    data.append([t, reactor.T])
    X.append(reactor.thermo.X)

data = np.array(data)
X =  np.array(X)
# Save results to file
species_I_want = ["C(S)", "H2", "CH4"]
multiplier = [100, 1, 1]
colors = ["k","r","g"]
for i, species in enumerate(species_I_want):
    mult_text = f"\\times{multiplier[i]}" if multiplier[i]>1.0 else ""
    plt.plot(data[:, 0]*velocity, X[:,gas.species_index(species)] * multiplier[i],colors[i], lw=1.5, label = f"$X_{{{species}}}{mult_text}$")
plt.legend()
plt.xlabel("x [m]")
plt.ylabel("Mole Fraction, $X_i$")
plt.show()
