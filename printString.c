#include "main.h"
/**
 * printString - print a string.
 * @PtrArg: argumen t.
 * Return: the length of the string.
 */

int printString(va_list PtrArg)
{
	char *String;
	int i, Counter;

	String = va_arg(PtrArg, char *);
	if (String == NULL)
	{
		String = "(null)";
		Counter = _strlen(String);
		for (i = 0; i < Counter; i++)
			_putchar(String[i]);
		return (Counter);
	}
	else
	{
		Counter = _strlen(String);
		for (i = 0; i < Counter; i++)
			_putchar(String[i]);
		return (Counter);
	}
}
