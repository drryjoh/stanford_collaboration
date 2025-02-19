"""
Shock and Detonation Toolbox Demo Program

Computes ZND and CV models of detonation with the shock front
traveling at the CJ speed.  Evaluates various measures of the reaction
zone thickness and exothermic pulse width, effective activation energy
and Ng stability parameter. 
 
################################################################################
Theory, numerical methods and applications are described in the following report:

    Numerical Solution Methods for Shock and Detonation Jump Conditions, S.
    Browne, J. Ziegler, and J. E. Shepherd, GALCIT Report FM2006.006 - R3,
    California Institute of Technology Revised August, 2017

Please cite this report and the website if you use these routines. 

Please refer to LICENCE.txt or the above report for copyright and disclaimers.

http://shepherd.caltech.edu/EDL/public/sdt/SD_Toolbox/

################################################################################ 
Updated August 2018
Tested with: 
    Python 3.5 and 3.6, Cantera 2.3 and 2.4
Under these operating systems:
    Windows 8.1, Windows 10, Linux (Debian 9)
"""
import sys
import os

sys.path.append(os.path.abspath("shock_detonation_tool_box/SDToolbox/Python3"))
from sdtoolbox.postshock import CJspeed, PostShock_fr
from sdtoolbox.znd import zndsolve
from sdtoolbox.cv import cvsolve
from sdtoolbox.utilities import CJspeed_plot, znd_plot
import cantera as ct
import numpy as np
import matplotlib.pyplot as plt
from inspect import signature

P1 = 6670.0; 
T1 = 298
q = 'H2:2 O2:1 AR:7'
mech = 'constant/H2_FFCM1_O3_Ar.yaml'
diff = 0.0
gas = ct.Solution(mech)
gas.TPX = T1, P1, q
for i, name in enumerate(gas.species_names):
    if gas.Y[i]>1e-16:
        print(f"{name} {gas.Y[i]}")
# Find CJ speed and related data, make CJ diagnostic plots
cj_speed,R2,plot_data = CJspeed(P1,T1,q,mech,fullOutput=True)
print(cj_speed)
# Set up gas object
gas1 = ct.Solution(mech)
gas1.TPX = T1,P1,q

# Find post shock state for given speed
cj_speed =  1637.275488
gas = PostShock_fr(cj_speed, P1, T1, q, mech)
print(gas.TP)
print(cj_speed)
# Solve ZND ODEs, make ZND plots
out = zndsolve(gas,gas1,cj_speed,t_end=4.0e-4,max_step=0.001,relTol=1e-4,advanced_output=True)
gas = PostShock_fr(cj_speed, P1, T1, q, mech)
for Y, name in zip(out['species'], gas.species_names):
    print(f"{name}: {Y[-1]}")
print(out["T"][-1])
np.save('Y.npy',out['species'])
np.save('T.npy',out['T'])
np.save('P.npy',out['P'])
np.save('x.npy',out['distance'])
