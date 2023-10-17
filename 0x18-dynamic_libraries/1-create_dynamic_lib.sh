#!/bin/bash

# Compile-all .c files into obj files.....
gcc -c -fPIC *.c

# Create the dynamic-library liball.so from the object files....
gcc -shared -o liball.so *.o

# -remove obj files after creating the library.....
rm -f *.o
