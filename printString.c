#include "main.h"

/**
* printString - Function to print print string
* @String: String to print
* Return: Length of string
*/

int printString(char *String)
{
	int Counter;

	Counter = 0;
	if (String == NULL)
	{
		String = "(null)";
		while (*String)
		{
			printChar((int)*String);
			++Counter;
			++String;
		}
		return (Counter);
	}
	else
	{
		while (*String)
		{
			printChar((int)*String);
			++Counter;
			++String;
		}
	}
	return (Counter);
}
