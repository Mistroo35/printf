#include "main.h"

/**
 *_printf - A custom printf function
 *@format: A string or a specifer in printf to print
 *
 *Return: return the number of charecter that printed
 */

int _printf(const char *format, ...)
{
    unsigned int i;
    int counter = 0;
    va_list ptrArgList;

    va_start(ptrArgList, format);
  if (format == NULL || (format[0] == '%' && format[1] == '\0'))
    return (-1);
  else 
  {
    for (i = 0; format[i] != '\0'; i++) 
    {
      if (format[i] != '%') 
      {
        _putchar(format[i]);
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
        case '%':
          _putchar('%');
          counter += 1;
          break;
        default:
          break;
        }
      }
    }
    va_end(ptrArgList);
    return (counter);
  }
}
