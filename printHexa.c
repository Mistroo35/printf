#include "main.h"

/**
 * printHexa - print HexaDecimalNumber
 * @Number: Number to prin
 * @Base: System base
 * Return: Count of Digits
*/

int printHexa(long Number, int Base)
{
	int Counter;
	char *Symbols;

	Counter = 0;
	Symbols = "0123456789ABCDEF";
	if (Number < 0)
	{
		write(1, "-", 1);
		return (printHexa(-Number, Base) + 1);
	}
	else if (Number < Base)
	{
		return (printChar(Symbols[Number]));
	}
	else
	{
		Counter = printHexa(Number / Base, Base);
		return (Counter + printHexa(Number % Base, Base));
	}

}
