#include "main.h"

/**
 * printDigit - print Digits
 * @Number: Number to prin
 * @Base: System base
 * Return: Count of Digits
*/

int printDigit(long Number, int Base)
{
	int Counter;
	char *Symbols;

	Counter = 0;
	Symbols = "0123456789abcdef";
	if (Number < 0)
	{
		write(1, "-", 1);
		return (printDigit(-Number, Base) + 1);
	}
	else if (Number < Base)
	{
		return (printChar(Symbols[Number]));
	}
	else
	{
		Counter = printDigit(Number / Base, Base);
		return (Counter + printDigit(Number % Base, Base));
	}

}
