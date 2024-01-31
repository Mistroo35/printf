#include "main.h"
#include <unistd.h>

/**
* handleFormat - print after specifier
* @Specifier: the type of content
* @PtrArg: content
* Return: Counter of chars
*/

int handleFormat(char Specifier, va_list PtrArg)
{
	int Counter;

	Counter = 0;
	if (Specifier == 'c')
	{
		Counter += printChar(va_arg(PtrArg, int));
	}
	else if (Specifier == 's')
	{
		Counter += printString(va_arg(PtrArg, char *));
	}
	else if (Specifier == 'd' || Specifier == 'i')
	{
		Counter += printDigit((long)(va_arg(PtrArg, int)), 10);
	}
	else if (Specifier == 'x')
	{
		Counter += printDigit(va_arg(PtrArg, unsigned int), 16);
	}
	else if (Specifier == 'o')
	{
		Counter += printDigit(va_arg(PtrArg, unsigned int), 8);
	}
	else if (Specifier == 'u')
	{
		Counter += printDigit(va_arg(PtrArg, unsigned int), 10);
	}
	else if (Specifier == 'X')
	{
		Counter += printHexa(va_arg(PtrArg, unsigned int), 16);
	}
	else if (Specifier == '%')
	{
		Counter += write(1, "%", 1);
	}
	else
	{
		return (-1);
	}

	return (Counter);
}
