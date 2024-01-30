#include "main.h"
/**
 * printString - print a string.
 * @s: string to print
 * Return: the length of the string.
 */

int printString(char *s)
{
	int i, len;

	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
}
