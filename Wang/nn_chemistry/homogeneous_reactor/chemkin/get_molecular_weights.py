import numpy as np
import cantera as ct

gas = ct.Solution("H2_FFCM1_O3.yaml")
mw  = gas.molecular_weights
print("mw")
print(','.join([f"scalar({mwi})" for mwi in mw]))
print("inv:")
print(','.join([f"scalar({1.0/(mwi)})" for mwi in mw]))

