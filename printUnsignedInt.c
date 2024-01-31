#include "main.h"
int printUnsignedInt(unsigned int number)
{
    
   int count = 0;
    int *array;
    int i;
    unsigned int temp = number;
  
    
    while (number/10 != 0)
    {
        
        number = number/10;
        count++;
    }
    count++;
    
    array=malloc(count* sizeof (int));
    for (i=0;i<count;i++){
        array[i] = temp%10;
        temp =temp/10;
    }

    for (i=count-1 ; i >= 0; i--)
    {
        _putchar(array[i] + '0');
    }
    free(array);
    return count;
}