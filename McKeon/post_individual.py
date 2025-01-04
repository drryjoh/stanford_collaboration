#!/usr/bin/env python3

import numpy as np
import matplotlib.pyplot as plt
import os
import argparse
import sys

def find_data_directory(home_dir, specified_dir=None):
    """
    Determine the directory where the .npy files are located.
    """
    print(home_dir)
    if specified_dir:
        if not os.path.exists(specified_dir):
            print(f"Error: Specified directory {specified_dir} does not exist.")
            sys.exit(1)
        print(f"returned {specified_dir}")
        return specified_dir
    if not os.path.exists(home_dir):
        print(f"Error: Home directory {home_dir} does not exist.")
        sys.exit(1)
    print(f"returned {home_dir}")
    return home_dir

def load_data(file_path, file_name):
    """
    Load an .npy file from the given directory.
    """
    full_path = os.path.join(file_path, file_name)
    if not os.path.exists(full_path):
        print(f"Error: {file_name} not found in {file_path}.")
        sys.exit(1)
    return np.load(full_path)
def plot_contour(X, Y, Z, title, file_name):
    """
    Create and save a contour plot with the true aspect ratio and dynamic figure size.
    """
    # Compute the aspect ratio
    width = X.max() - X.min()
    height = Y.max() - Y.min()
    aspect_ratio = width / height
    print(f"Aspect Ratio: {aspect_ratio}")

    # Define the desired width or height of the figure
    base_width = 10  # Desired width in inches
    figsize = (base_width, base_width / aspect_ratio)  # Adjust height based on aspect ratio

    # Create the figure with the specified size
    fig, ax = plt.subplots(figsize=figsize)
    
    # Create the contour plot
    contour = ax.contourf(X, Y, Z, levels=50, cmap="viridis")
    cbar = fig.colorbar(contour, ax=ax, label=title)
    ax.set_xlabel("X")
    ax.set_ylabel("Y")
    ax.set_title(title)

    # Ensure the aspect ratio of the axes matches the data
    ax.set_aspect('auto')  # Adjust dynamically based on data ratio

    # Save the plot with tight layout
    plt.savefig(file_name, bbox_inches='tight', pad_inches=0.1, dpi=300)
    print(f"Saved plot: {file_name}")
    plt.close()
    exit()

def main():
    # Argument parser setup
    parser = argparse.ArgumentParser(description="Reprocess and replot data from .npy files.")
    parser.add_argument(
        "--data-dir",
        type=str,
        help="Path to the directory containing the .npy data files (default: home directory)",
        default=None
    )
    args = parser.parse_args()

    # Determine data directory
    data_location = find_data_directory(home_dir="./", specified_dir=args.data_dir)

    # Load spatial arrays
    print(data_location)
    X = load_data(data_location, "X.npy")
    Y = load_data(data_location, "Y.npy")

    # Variables to process
    variables = ["H2", "u", "v", "w"]

    for variable in variables:
        # Find time-dependent files for the current variable
        variable_files = sorted(
            [f for f in os.listdir(data_location) if f.startswith(f"{variable}_time_") and f.endswith(".npy")]
        )

        if not variable_files:
            print(f"No {variable}_time_*.npy files found in {data_location}.")
            continue

        # Process each time-dependent file
        for file_name in variable_files:
            print(f"Processing file: {file_name}...")

            # Load the dependent variable data
            data = load_data(data_location, file_name)

            # Extract timestep index from filename
            timestep_index = file_name.split("_")[-1].split(".")[0]

            # Plot and save contour plot
            plot_contour(
                X, Y, data,
                f"{variable} (Time {timestep_index})",
                f"{variable}_replot_time_{timestep_index}.png"
            )

if __name__ == "__main__":
    main()

