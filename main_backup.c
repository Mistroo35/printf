#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int printChar(int ch)
{
    putchar(ch);
    return 1;
}
int printString(const char *string)
{
    int i, len;
    len = strlen(string);
    if (string != NULL)
    {
        for (i = 0; i < len; i++)
        {
            putchar(string[i]);
        }
    }
    else
    {
        const char *nill = "nill";
        len = strlen(nill);
        for (i = 0; i < len; i++)
        {
            putchar(nill[i]);
        }
    }
    return len;
}


int print_number_putchar(int number)
{
    /*Check if the number is negative.*/
    if (number < 0)
    {
        /*Print a minus sign.*/ 
        putchar('-');

        /*Convert the number to its absolute value.*/ 
        number = -number;
    }

    /*Check if the number is zero.*/ 
    if (number == 0)
    {
        /*Print a zero.*/ 
        putchar('0');
        return 1;
    }

    /*Initialize a buffer to store the digits of the number.*/ 
    else
    {

        char buffer[12];
        int index = 0;
        int j;
        while (number > 0)
        {/*  */
            int digit = number % 10;
            buffer[index++] = digit + '0';
            number /= 10;
        }
         j = index;

        /*Print the digits of the number from the buffer, in reverse order.*/ 
        while (index > 0)
        {
            putchar(buffer[--index]);
        }
        

        return j;
    }

    /*Divide the number by 10 repeatedly and store the digits in the buffer.*/ 
}



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
                counter += print_number_putchar(va_arg(ptrArgList,int));
                break; 
            case 'i':
                counter += print_number_putchar(va_arg(ptrArgList,int));
                break;   
            default:
                putchar('%');
                
                counter += 1;
                break;
            }
        }
    }

    va_end(ptrArgList);
    return counter;
}

int main(void)
{
    int len;
    int len2;
    
    
   len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
   
    
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
     _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return 0;
}
