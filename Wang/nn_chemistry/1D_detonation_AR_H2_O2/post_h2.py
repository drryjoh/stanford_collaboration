import numpy as np
import matplotlib.pyplot as plt

x = np.load("x.npy")
T = np.load("T.npy")

xof = np.load("xdet.npy")
Tof = np.load("Tdet.npy")

x2of = np.load("xdet_nn.npy")
T2of = np.load("Tdet_nn.npy")

end_idx = len(Tof)
plt.plot(x,T,'-r',lw=4,label='SD Toolbox')
for i, Ti in enumerate(Tof[::-1]):
    if Ti>300:
        front_idx = end_idx-i
        break
plt.xlim([x[0]-0.01,x[-1]*1.1])
plt.ylim([T[0]-200,T[-1]*1.1])
plt.plot(xof[front_idx]-xof,Tof,'--k',label='OpenFOAM + FRC')

end_idx = len(T2of)
for i, Ti in enumerate(T2of[::-1]):
    if Ti>300:
        front_idx = end_idx-i
        break
plt.plot(x2of[front_idx]-x2of,T2of,'--b',label='OpenFOAM + NN; 500 steps')
plt.legend()
plt.xlabel("distance [m] behind shock")
plt.ylabel("Temperature [K]")
plt.savefig("detonation_compare.png",dpi=300)
plt.show()
