#!python3
from sdtoolbox.postshock import CJspeed, PostShock_fr
from sdtoolbox.znd import zndsolve
from sdtoolbox.utilities import CJspeed_plot, znd_plot, znd_fileout
import cantera as ct
import numpy as np
import csv 

def run_znd_safe(gas, gas1, cj_speed, t_end):
    tried = []
    for Method, (relTol, absTol) in [
        ('LSODA', (1e-8, 1e-12)),
        ('Radau', (1e-8, 1e-12)),   # another stiff solver
        ('BDF',   (1e-8, 1e-12)),   # keep, but not hyper-tight
    ]:
        try:
            tried.append((Method, relTol, absTol))
            return zndsolve(
                gas, gas1, cj_speed, t_end=t_end,
                advanced_output=True, Method=Method,
                relTol=relTol, absTol=absTol
            )
        except Exception as e:
            print(f"[WARN] zndsolve failed with {Method} (relTol={relTol}, absTol={absTol}): {e}")
    raise RuntimeError(f"All ZND attempts failed. Tried: {tried}")


# ---------------- CLEANUP ----------------
def cleanup(arr, tol=1e-20):
    arr = np.nan_to_num(arr, nan=0.0, posinf=1e300, neginf=0.0)
    arr[arr < tol] = 0.0
    return arr
# -----------------------------------------


#Set gas properties and mechanism
P = 0.2 * 101325
T = 298
X = 'C2H4:1,O2:3,N2:4' #Should be argon, but for now just testing to get working in OF

gas1 = ct.Solution('./mechanism/ffcmy9reduced30.yaml')
gas1.TPX = T, P, X
print(gas1.density)


# Get species names and mass fractions
species = gas1.species_names
mass_fractions = gas1.Y

# Print all species with their mass fractions (including zeros)
for name, Y in zip(species, mass_fractions):
    print(f"{name}: {Y:.6e}")
print(f"Density: {gas1.density:.4f} kg/m³")

cj_speed, R2, plot_data = CJspeed(P, T, X, './mechanism/ffcmy9reduced30.yaml', fullOutput=True)

gas = PostShock_fr(cj_speed, P, T, X, './mechanism/ffcmy9reduced30.yaml')

znd_out = run_znd_safe(gas, gas1, cj_speed, t_end=1e-3)



species_names_array = znd_out['gas1'].species_names
n_species = len(species_names_array)
n_cols = 4+1+n_species #pressure, density, temperature, velocity, X (additional 5 variables)
header = ['X','Pressure', 'Temperature', 'Density','Velocity'] + species_names_array

# extract distance from solution 
x_array = cleanup(np.transpose(znd_out['distance']))

#extract pressure from solution
p_array = cleanup(np.transpose(znd_out['P']))

#extract temperature from solution
T_array = cleanup(np.transpose(znd_out['T']))

#extract density from solution
rho_array = cleanup(np.transpose(znd_out['rho']))

#extract velocity from solution
U1 = np.array(znd_out['U1'])
U = np.array(znd_out['U'])
vel_array = cleanup(U1 - U) #NOTE: Changing relative coordinates

#extract species from solution
species_array = cleanup(znd_out['species'].T)

#create output array
out_array = np.zeros((len(x_array),n_cols))

file_name = 'ffcm2ethylene'
#stack things up here
out_array[:,0] = x_array
out_array[:,1] = p_array
out_array[:,2] = T_array
out_array[:,3] = rho_array
out_array[:,4] = vel_array
out_array[:,5:] = species_array

with open(file_name+'_ZND_solution.csv', 'w') as f:
    for name in header:
        f.write('"%s" '%name)
    f.write('\n')

with open(file_name+'_ZND_solution.csv', 'a') as f:
    csv.writer(f, delimiter=' ').writerows(out_array)
