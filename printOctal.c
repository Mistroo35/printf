#include "main.h"

int printOctal(unsigned int n){

   int count = 0;
    int *array;
    int i;
    unsigned int temp = n;
  
    
    while (n/8 != 0)
    {
        
        n = n/8;
        count++;
    }
    count++;
    
    array=malloc(count* sizeof (n));
    for (i=0;i<count;i++){
        array[i] = temp%8;
        temp =temp/8;
    }

    for (i=count-1 ; i >= 0; i--)
    {
        _putchar(array[i] + '0');
    }
    free(array);
    return count;
}