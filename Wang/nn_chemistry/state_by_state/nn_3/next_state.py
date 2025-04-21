#!python3
#import numpy as np
#import cantera as ct
#from concurrent.futures import ProcessPoolExecutor

## Load mechanism and data
#gas = ct.Solution("H2_FFCM1_O3_Ar.yaml")
#data = np.loadtxt("data/consolidated.csv", delimiter=',')
#new_data = []
#print(np.shape(data))
#for i, d in enumerate(data):
#    if i%1000 == 0:
#        print(i)
#    T = d[0]
#    p = d[1]
#    Y = d[2:]
    
#    gas_local = ct.Solution("H2_FFCM1_O3_Ar.yaml")
#    gas_local.TPY = T, p, Y
#    reactor = ct.IdealGasReactor(gas)
#    network = ct.ReactorNet([reactor])
#    dt = 1e-9
#    network.advance(dt)
#    Tnew, Pnew, Ynew = gas.TPY
#    new_data.append([Tnew, Pnew, Ynew.flatten()])

#new_data = np.array(new_data)
#np.write("data/consolidated_dt.npy", new_data)
import numpy as np
import cantera as ct
from concurrent.futures import ProcessPoolExecutor
from tqdm import tqdm
import multiprocessing

def simulate_row(row):
    try:
        T = row[0]
        p = row[1]
        Y = row[2:]

        gas_local = ct.Solution("H2_FFCM1_O3_Ar.yaml")
        gas_local.TPY = T, p, Y

        reactor = ct.IdealGasReactor(gas_local)
        network = ct.ReactorNet([reactor])
        dt = 1e-9
        network.advance(dt)

        Tnew, Pnew, Ynew = gas_local.TPY
        return [Tnew, Pnew, *Ynew]
    
    except Exception as e:
        return f"ERROR: {e}"

if __name__ == "__main__":
    data = np.loadtxt("data/consolidated.csv", delimiter=',')
    gas = ct.Solution("H2_FFCM1_O3_Ar.yaml")
    assert data.shape[1] == 2 + gas.n_species
    num_cores = multiprocessing.cpu_count()  # typically returns 16 on your Mac
    print(f"number of cores {num_cores}")
    with ProcessPoolExecutor(max_workers=num_cores) as executor:
        results = list(tqdm(executor.map(simulate_row, data), total=len(data)))

    # Convert and save
    results = [r for r in results if isinstance(r, list)]  # filter out any error strings
    results_array = np.array(results)
    np.save("data/consolidated_dt.npy", results_array)
