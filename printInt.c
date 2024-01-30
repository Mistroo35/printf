#include "main.h"
/**
 * printInt - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printInt(va_list args)
{
	int Int = va_arg(args, int);
	int num, last = Int % 10, digit, exp = 1;
	int  i = 1;

	Int = Int / 10;
	num = Int;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		Int = -Int;
		last = -last;
		i++;
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
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printDec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int Dec = va_arg(args, int);
	int num, last = Dec % 10, digit;
	int  i = 1;
	int exp = 1;

	Dec = Dec / 10;
	num = Dec;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		Dec = -Dec;
		last = -last;
		i++;
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
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
