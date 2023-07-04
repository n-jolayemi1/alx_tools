#!/bin/bash

#loop through all .c file in the current directory and compile them

for file in *.c; do
	# Compile all file using GCC compiler
	gcc -o "${file%.*}" "$file"

done
