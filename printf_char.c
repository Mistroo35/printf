#include "main.h"

/**
 * printf_char - prints a char.
 * @PtrArg: arguments.
 * Return: 1.
 */
int printf_char(va_list PtrArg)
{
	char s;

	s = va_arg(PtrArg, int);
	_putchar(s);
	return (1);
}
