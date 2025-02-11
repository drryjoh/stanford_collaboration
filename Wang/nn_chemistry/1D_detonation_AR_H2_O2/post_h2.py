import numpy as np
import matplotlib.pyplot as plt

x = np.load("x.npy")
T = np.load("T.npy")

xof = np.load("xdet.npy")
Tof = np.load("Tdet.npy")

plt.plot(x,T,'-k',label='SD Toolbox')
end_idx = len(Tof)
for i, Ti in enumerate(Tof[::-1]):
    print(Ti)
    if Ti>300:
        front_idx = end_idx-i
        break
print(front_idx)
plt.xlim([x[0]-0.01,x[-1]*1.1])
plt.ylim([T[0]-200,T[-1]*1.1])
plt.plot(xof[front_idx]-xof,Tof,'--r',label='OpenFOAM (detonationFoam)')
plt.legend()
plt.xlabel("distance [m] behind shock")
plt.ylabel("Temperature [K]")
plt.savefig("detonation_compare.png",dpi=300)
plt.show()
