#include "main.h"
/**
 * printInt - prints integer
 * @Int: integer to print
 * Return: number of characters printed
 */
int printInt(int Int)
{
	int num, last = Int % 10, digit, exp = 1;
	int  Counter = 1;

	Int = Int / 10;
	num = Int;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		Int = -Int;
		last = -last;
		Counter++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = Int;
		while (exp > 0)
		{
			digit = num / exp;
			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			Counter++;
		}
	}
	putchar(last + '0');

	return (Counter);
}

/**
 * printDec - prints decimal
 * @Dec: Decimal to print
 * Return: number of characters printed
 */

int printDec(int Dec)
{
	int num, last = Dec % 10, digit;
	int  Counter = 1;
	int exp = 1;

	Dec = Dec / 10;
	num = Dec;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		Dec = -Dec;
		last = -last;
		Counter++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = Dec;
		while (exp > 0)
		{
			digit = num / exp;
			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			Counter++;
		}
	}
	putchar(last + '0');

	return (Counter);
}
