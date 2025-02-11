#!/bin/bash

# Define the URL and output directory
URL="https://shepherd.caltech.edu/EDL/PublicResources/sdt/SDToolbox.zip"
OUTPUT_DIR="shock_detonation_tool_box"

# Create the output directory if it doesn't exist
mkdir -p "$OUTPUT_DIR"

# Download the ZIP file
echo "Downloading SDToolbox..."
curl -o SDToolbox.zip "$URL"

# Check if the download was successful
if [ $? -ne 0 ]; then
    echo "Download failed. Exiting."
    exit 1
fi

# Unzip the file into the output directory
echo "Extracting SDToolbox..."
unzip -o SDToolbox.zip -d "$OUTPUT_DIR"

# Check if unzip was successful
if [ $? -ne 0 ]; then
    echo "Extraction failed. Exiting."
    exit 1
fi

# Clean up the zip file
rm SDToolbox.zip

echo "SDToolbox downloaded and extracted successfully."

