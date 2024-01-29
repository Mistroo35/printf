#include "main.h"
/**
 * printString - print a string.
 * @String: string to print.
 * Return: the length of the String.
 */

int printString(const char *String)
{
	int i, len;

	len = strlen(String);
	if (String != NULL)
	{
		for (i = 0; i < len; i++)
		{
			putchar(String[i]);
		}
	}
	else
	{
		const char *nill = "nill";

		len = strlen(nill);
		for (i = 0; i < len; i++)
		{
			putchar(nill[i]);
		}
	}
	return (len);
}