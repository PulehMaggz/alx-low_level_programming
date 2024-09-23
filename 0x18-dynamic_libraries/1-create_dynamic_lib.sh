#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c   # Compile all .c files into .o files
gcc -shared -o liball.so *.o                      # Create the shared library liball.so from the .o files

