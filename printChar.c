#include "main.h"

/**
* printChar - print chat to stout
* @Char: Char to print
* Return: 1
*/

int printChar(int Char)
{
	return (write(1, &Char, 1));
}

