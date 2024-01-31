
#include "main.h"

/**
 * printBinary - print HexaDecimalNumber
 * @Number: Number to prin
 * @Base: System base
 * Return: Count of Digits
*/

int printBinary(long Number, int Base)
{
	int Counter;
	char *Symbols;

	Counter = 0;
	Symbols = "0123456789ABCDEF";
	if (Number < 0)
	{
		write(1, "-", 1);
		return (printBinary(-Number, Base) + 1);
	}
	else if (Number < Base)
	{
		return (printChar(Symbols[Number]));
	}
	else
	{
		Counter = printBinary(Number / Base, Base);
		return (Counter + printBinary(Number % Base, Base));
	}

}
