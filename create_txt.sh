#!/bin/bash
# Author: Devom Brahmbhatt
# Date: 9/30
# Description: This script handles copying and appending template and source code files for the Source.cpp

# Path to the folder where Source.cpp is located
ACTIVE_DIR=$(pwd)

# File paths
SOURCE_CPP="$ACTIVE_DIR/Source.cpp"
TEMPLATE="Submission Template.txt"
OUTPUT_TXT="$ACTIVE_DIR/HW_4-1.txt" # Instead of 
FILE_BEING_MADE="Filler.CPP" # ADD THIS

# Check if the Source.cpp file exists
if [[ ! -f "$SOURCE_CPP" ]]; then
  echo "Source.cpp not found in $ACTIVE_DIR"
  exit 1
fi

# Check if the Submission Template file exists
if [[ ! -f "$TEMPLATE" ]]; then
  echo "Submission Template.txt not found"
  exit 1
fi

# Check if the HW_4-1.txt file already exists and prompt for overwrite
if [[ -f "$OUTPUT_TXT" ]]; then
  read -p "HW_4-1.txt already exists. Overwrite? (y/n): " choice
  if [[ "$choice" != "y" ]]; then
    echo "Operation aborted."
    exit 1
  fi
fi

# Create the HW_4-1.txt file and copy the content from the Submission Template
echo "Copying Submission Template..."
if ! cp "$TEMPLATE" "$OUTPUT_TXT"; then
  echo "Failed to copy Submission Template to $OUTPUT_TXT"
  exit 1
fi

# Append the contents of Source.cpp to the HW_4-1.txt file
echo "Appending Source.cpp contents..."
if ! cat "$SOURCE_CPP" >> "$OUTPUT_TXT"; then
  echo "Failed to append Source.cpp to $OUTPUT_TXT"
  exit 1
fi

echo "HW_4-1.txt created successfully with content from both Submission Template.txt and Source.cpp."
