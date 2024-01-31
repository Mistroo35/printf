#include "main.h"
int printBinary( unsigned int n){
    int count = 0;
    int *array;
    int i;
    unsigned int temp = n;
  
    
    while (n/2 != 0)
    {
        
        n = n/2;
        count++;
    }
    count++;
    
    array=malloc(count* sizeof (n));
    for (i=0;i<count;i++){
        array[i] = temp%2;
        temp =temp/2;
    }

    for (i=count-1 ; i >= 0; i--)
    {
        _putchar(array[i] + '0');
    }
    free(array);
    return count;
}