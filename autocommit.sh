#!/bin/bash

# Iterate over each file in the directory
for file in *; do
    # Check if the item is a file
    if [ -f "$file" ]; then
        # Add the file to the staging area
        git add "$file"

        git commit -m "Add $file"

        echo committed "$file"
	
	git push
        echo pushed "$file"
        # Generate a random sleep duration between 5 and 25 seconds
        sleep_duration=$(shuf -i 5-15 -n 1)

        echo wait "$sleep_duration"

        # Sleep for the random duration before processing the next file
        sleep "$sleep_duration"
    fi
done
