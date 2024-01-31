
#include "main.h"  

/**
 * printInt - Print an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */
int printInt(int number)
{
    int counterOfDigits;

    counterOfDigits = 0;

    if (number==0){
        _putchar(number+'0');
        return 1;
    }
    /* Handle negative numbers */
    if (number < 0)
    {
        _putchar('-');
        counterOfDigits++;
        number = -number;
    }

    /* Print digits in reverse order*/
    if (number / 10 != 0)
        counterOfDigits += printInt(number / 10);

    _putchar(number % 10 + '0');
    counterOfDigits++;

    return counterOfDigits;
}
