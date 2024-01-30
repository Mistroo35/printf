#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* _printf - Custom printf function
* @Format: to print
* Return: Count of chars
*/

int _printf(const char *Format, ...)
{
	va_list PtrArg;
	int Counter;

	va_start(PtrArg, Format);
	Counter = 0;
	while (*Format)
	{
		if (*Format == '%')
		{
			Counter += handleFormat(*++Format, PtrArg);
		}
		else
		{
			Counter += write(STDIN_FILENO, Format, 1);
		}
		++Format;
	}
	va_end(PtrArg);

	return (Counter);
}
