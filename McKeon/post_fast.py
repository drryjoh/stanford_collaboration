#!/usr/bin/env python3

import numpy as np
import os
import argparse
import sys

def load_data(file_path, file_name):
    """
    Load an .npy file from the specified path.
    """
    full_path = os.path.join(file_path, file_name)
    if not os.path.exists(full_path):
        print(f"Error: {file_name} not found in {file_path}.")
        sys.exit(1)
    return np.load(full_path)

def save_data(data, file_name):
    """
    Save the provided data to an .npy file.
    """
    np.save(file_name, data)
    print(f"Saved data: {file_name}")

def main():
    # Set up argument parser
    parser = argparse.ArgumentParser(description="Efficiently extract and save time slices from 3D .npy data files.")
    parser.add_argument("data_location", type=str, help="Path to the directory containing the .npy data files")
    parser.add_argument("--start-timestep", type=int, default=0, help="Starting timestep (default: 0)")
    args = parser.parse_args()

    data_location = args.data_location
    start_timestep = args.start_timestep

    # Load spatial arrays (assumed not time-dependent)
    print("Loading spatial data...")
    X = load_data(data_location, "X.npy")
    Y = load_data(data_location, "Y.npy")

    # Load time-dependent 3D data arrays
    print("Loading time-dependent data...")
    H2 = load_data(data_location, "H2.npy")
    u = load_data(data_location, "u.npy")
    v = load_data(data_location, "v.npy")
    w = load_data(data_location, "w.npy")

    # Ensure arrays have compatible dimensions
    time_steps = H2.shape[-1]
    if any(arr.shape[-1] != time_steps for arr in [u, v, w]):
        print("Error: The last dimension (time) of the data arrays must match.")
        sys.exit(1)

    # Output directory for slices
    output_dir = os.path.join(data_location, "time_slices")
    os.makedirs(output_dir, exist_ok=True)

    # Process each timestep starting from the specified one
    for t in range(start_timestep, time_steps):
        index_str = f"{t:04d}"

        # Check if files already exist to skip
        if all(os.path.exists(os.path.join(output_dir, f"{var}_time_{index_str}.npy")) for var in ["H2", "u", "v", "w"]):
            print(f"Timestep {index_str} already processed. Skipping...")
            continue

        print(f"Processing timestep {t + 1}/{time_steps}...")

        # Extract data for the current timestep
        H2_t = H2[:, :, t]
        u_t = u[:, :, t]
        v_t = v[:, :, t]
        w_t = w[:, :, t]

        # Save slices
        save_data(H2_t, os.path.join(output_dir, f"H2_time_{index_str}.npy"))
        save_data(u_t, os.path.join(output_dir, f"u_time_{index_str}.npy"))
        save_data(v_t, os.path.join(output_dir, f"v_time_{index_str}.npy"))
        save_data(w_t, os.path.join(output_dir, f"w_time_{index_str}.npy"))

if __name__ == "__main__":
    main()
