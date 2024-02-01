#include "main.h"

/**
 * printf_char -a function that prints a char.
 * @PtrArg: the arguments.
 * Return: 1.
 *
 */
 
 int printf_char(va_list PtrArg)
{
	char s;

	s = va_arg(PtrArg, int);
	_putchar(s);
	return (1);
}
