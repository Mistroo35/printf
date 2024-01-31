#include "main.h"
/**
*printString - This function print string with speifer 's'
*@string: string to printed
*
*Return: the length of string
*/

int printString(const char *string)
{
	int i, len;

	len = strlen(string);
	if (string != NULL)
	{
		for (i = 0; i < len; i++)
		{
			_putchar(string[i]);
		}
	}
	else
	{
		const char *nill = "nill";

		len = strlen(nill);
		for (i = 0; i < len; i++)
		{
			_putchar(nill[i]);
		}
	}
	return (len);
}
