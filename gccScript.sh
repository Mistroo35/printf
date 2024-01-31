#!/bin/bash

# Prompt the user for the name of the C file
echo "Enter the name of the C file: "
read file

# Prompt the user for the name of the output file
echo "Enter the name of the output file: "
read output

# Compile the C file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -I./ main.h $file -o $output

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful"
else
  echo "Compilation failed"
  exit 1
fi

# Exit the script
exit 0