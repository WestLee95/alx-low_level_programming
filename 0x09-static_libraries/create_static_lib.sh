#!/bin/bash

# Create a list of all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
for file in $c_files; do
	gcc -c $file
done

# Create a list of all the .o files in the current directory
o_files=$(ls *.o)

# Create the liball.a static library from all the .o files
ar rcs liball.a $o_files
