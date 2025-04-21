#!python3
import numpy as np
data = np.load("data/consolidated_dt.npy")
f = open("data/consolidated_dt.csv","w")

for line in data:
    f.write('{0}\n'.format(','.join([str(pt) for pt in line])))