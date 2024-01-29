#include "main.h"

/**
 *_printf - A custom printf function
 *@format: A string or a specifer in printf to print
 *
 *Return: return the number of charecter that printed
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	size_t i;
	int counter = 0;

	va_list ptrArgList;

	va_start(ptrArgList, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			counter++;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					counter += printChar(va_arg(ptrArgList, int));
					break;
				case 's':
					counter += printString(va_arg(ptrArgList, const char *));
					break;
				case 'd':
					counter += print_number_putchar(va_arg(ptrArgList, int));
					break;
				case 'i':
					counter += print_number_putchar(va_arg(ptrArgList, int));
					break;
				default:
					putchar('%');

					counter += 1;
					break;
			}
		}
	}

	va_end(ptrArgList);
	return (counter);
}

