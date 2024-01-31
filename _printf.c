#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @Format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const Format, ...)
{
	HandleSpecifier Array[] = {
		{"%s", printString}, {"%c", printChar}, {"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list PtrArg;
	int i = 0, j, Counter = 0;

	va_start(PtrArg, Format);
	if (Format == NULL || (Format[0] == '%' && Format[1] == '\0'))
		return (-1);

Here:
	while (Format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (Array[j].id[0] == Format[i] && Array[j].id[1] == Format[i + 1])
			{
				Counter += Array[j].f(PtrArg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		putchar(Format[i]);
		Counter++;
		i++;
	}
	va_end(PtrArg);
	return (Counter);
}

