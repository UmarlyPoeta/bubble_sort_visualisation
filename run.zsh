#!/bin/zsh

# Set the source file and output binary
SOURCE_FILE="main.cpp"
OUTPUT_BINARY="main"

# Compile the source file with SFML
g++ $SOURCE_FILE -o $OUTPUT_BINARY -lsfml-graphics -lsfml-window -lsfml-system

# Check if the compilation was successful
if [[ $? -eq 0 ]]; then
    echo "Compilation successful. Running the program..."
    # Execute the binary
    ./$OUTPUT_BINARY
else
    echo "Compilation failed."
fi