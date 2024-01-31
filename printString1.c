#include "main.h"  

/**
 * printString - Print a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int printString(const char *str)
{
    int counter = 0;

    if (str == NULL)
        str = "(null)";

    while (*str != '\0')
    {
        _putchar(*str);
        counter++;
        str++;
    }

    return counter;
}
