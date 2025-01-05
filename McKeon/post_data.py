#!/usr/bin/env python3

import numpy as np
import matplotlib.pyplot as plt
import os
import argparse
import sys

def load_data(file_path, file_name):
    full_path = os.path.join(file_path, file_name)
    if not os.path.exists(full_path):
        print(f"Error: {file_name} not found in {file_path}.")
        sys.exit(1)
    return np.load(full_path)

def save_data(data, file_name):
    np.save(file_name, data)
    print(f"Saved data: {file_name}")

def main():
    # Set up argument parser
    parser = argparse.ArgumentParser(description="Process and visualize data from .npy files.")
    parser.add_argument("data_location", type=str, help="Path to the directory containing the .npy data files")
    args = parser.parse_args()

    data_location = args.data_location

    # Load spatial arrays
    print("Loading Spatial Data")
    X = load_data(data_location, "X.npy")
    Y = load_data(data_location, "Y.npy")

    # Load 3D data arrays
    print("Loading H2 Data")
    H2 = load_data(data_location, "H2.npy")
    print("Loading u Data")
    u = load_data(data_location, "u.npy")
    print("Loading v Data")
    v = load_data(data_location, "v.npy")
    print("Loading w Data")
    w = load_data(data_location, "w.npy")

    # Ensure arrays have compatible dimensions
    time_steps = H2.shape[-1]
    if any(arr.shape[-1] != time_steps for arr in [u, v, w, H2]):
        print("Error: The last dimension (time) of the data arrays must match.")
        sys.exit(1)

    # Loop through each timestep and generate plots
    for t in range(time_steps):
        print(f"Processing timestep {t + 1}/{time_steps}...")

        # Zero-padded index
        index_str = f"{t:04d}"

        # Extract data for the current timestep
        H2_t = H2[:,:,t]
        u_t = u[:,:,t]
        v_t = v[:,:,t]
        w_t = w[:,:,t]

        save_data(H2_t, f"H2_time_{index_str}.npy")
        save_data(u_t, f"u_time_{index_str}.npy")
        save_data(v_t, f"v_time_{index_str}.npy")
        save_data(w_t, f"w_time_{index_str}.npy")

if __name__ == "__main__":
    main()
