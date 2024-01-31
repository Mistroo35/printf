#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @PtrArg: arguments.
 * Return: counter.
 */
int printf_pointer(va_list PtrArg)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(PtrArg, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
