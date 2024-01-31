#include "main.h"


/*
 * Function: printLowerHexa
 * Description: Prints the lowercase hexadecimal representation of an unsigned integer.
 * Parameters:
 *   - n: The unsigned integer to be converted and printed.
 * Return:
 *   - The number of characters printed.
 */
int printLowerHexa(unsigned int n) {
    int count = 0;
    int *array;
    int i;
    unsigned int temp = n;

    
    while (n / 16 != 0) {
        n = n / 16;
        count++;
    }
    count++;

    
    array = malloc(count * sizeof(int));

    
    for (i = 0; i < count; i++) {
        array[i] = temp % 16;
        temp = temp / 16;
    }

    
    for (i = count - 1; i >= 0; i--) {
        
        if (array[i] >= 10 && array[i] <= 15) {
            _putchar('a' + (array[i] - 10));
        } else {
            _putchar(array[i] + '0');
        }
    }

    
    free(array);

    
    return count;
}
