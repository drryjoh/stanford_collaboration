import numpy as np
import matplotlib.pyplot as plt

x = np.load("x.npy")
T = np.load("T.npy")

xof = np.load("xdet.npy")
Tof = np.load("Tdet.npy")

x2of = np.load("x2det.npy")
T2of = np.load("T2det.npy")

plt.plot(x,T,'-k',label='SD Toolbox')
end_idx = len(Tof)
for i, Ti in enumerate(Tof[::-1]):
    if Ti>300:
        front_idx = end_idx-i
        break
plt.plot(xof[front_idx]-xof,Tof,'--r',label='OpenFOAM time=0.005(detonationFoam)')

end_idx = len(T2of)
for i, Ti in enumerate(T2of[::-1]):
    if Ti>300:
        front_idx = end_idx-i
        break
plt.plot(x2of[front_idx]-x2of,T2of,'--b',label='OpenFOAM time=0.006 (detonationFoam)')
plt.legend()
plt.xlabel("distance [m] behind shock")
plt.ylabel("Temperature [K]")
plt.savefig("detonation_compare.png",dpi=300)
plt.show()
