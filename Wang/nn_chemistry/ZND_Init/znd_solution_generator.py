#!python3
from sdtoolbox.postshock import CJspeed, PostShock_fr
from sdtoolbox.znd import zndsolve
from sdtoolbox.utilities import CJspeed_plot, znd_plot, znd_fileout
import cantera as ct
import numpy as np
import csv 

#Set gas properties and mechansim
P = 101325
T = 298
X = 'CH4:1,O2:2'

gas1 = ct.Solution('FFCMy_12.yaml')
gas1.TPX = T, P, X


# Get species names and mass fractions
species = gas1.species_names
mass_fractions = gas1.Y

# Print all species with their mass fractions (including zeros)
for name, Y in zip(species, mass_fractions):
    print(f"{name}: {Y:.6e}")
print(f"Density: {gas1.density:.4f} kg/m³")


cj_speed, R2, plot_data = CJspeed(P, T, X, 'FFCMy_12.yaml', fullOutput=True)

gas = PostShock_fr(cj_speed, P, T, X, 'FFCMy_12.yaml')

znd_out = zndsolve(gas,gas1,cj_speed,t_end=1e-3,advanced_output=True,Method='BDF',relTol=1e-20,absTol=1e-18)

species_names_array = znd_out['gas1'].species_names
n_species = len(species_names_array)
n_cols = 4+1+n_species #pressure, density, temperature, velocity, X (additional 5 variables)
header = ['X','Pressure', 'Temperature', 'Density','Velocity'] + species_names_array

# extract distance from solution 
x_array = znd_out['distance']
x_array = np.transpose(x_array)

#extract pressure from solution
p_array = znd_out['P']
p_array = np.transpose(p_array)

#extract temperature from solution
T_array = znd_out['T']
T_array = np.transpose(T_array)

#extract density from solution
rho_array = znd_out['rho']
rho_array = np.transpose(rho_array)

#extract density from solution
U1 = np.array(znd_out['U1'])
U = np.array(znd_out['U'])
vel_array = U1 - U #NOTE: Changing relative coordinates

#extract species from solution
species_array = znd_out['species'].T

#create output array
out_array = np.zeros((len(x_array),n_cols))

file_name = 'ffcm2methane'
#stack things up here
out_array[:,0] = x_array
out_array[:,1] = p_array
out_array[:,2] = T_array
out_array[:,3] = rho_array
out_array[:,4] = vel_array
out_array[:,5:] = species_array
with open(file_name+'_ZND_solution.csv', 'w') as f:
# with open(file_name+'_'+str(cj_speed)+'overdriven_zndshk_solution.txt', 'w') as f:
    for name in header:
        f.write('"%s" '%name)
    f.write('\n')
with open(file_name+'_ZND_solution.csv', 'a') as f:
# with open(file_name+'_'+str(cj_speed)+'overdriven_zndshk_solution.txt', 'a') as f:
    csv.writer(f, delimiter=' ').writerows(out_array)
