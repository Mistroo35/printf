#include "main.h"
/**
* printString - print a string.
* @String: string to print.
* Return: the length of the String.
*/

int printString(const char *String)
{
	int i, len;

	if (String == NULL)
	{
		String = "(null)";
		len = strlen(String);
		for (i = 0; i < len; i++)
		{
			putchar(String[i]);
		}
		return (len);
	}
	else
	{
		len = strlen(String);
		for (i = 0; i < len; i++)
		{
			putchar(String[i]);
		}
		return (len);
	}
}
