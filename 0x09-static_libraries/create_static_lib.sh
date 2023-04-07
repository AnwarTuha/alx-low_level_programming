#!/bin/bash
# create_static_lib.sh

# Create an object file for each .c file
for file in *.c; do
    gcc -c -Wall -Werror -Wextra -pedantic "$file"
done

# Create the static library
ar -rc liball.a *.o

# Clean up object files
rm *.o