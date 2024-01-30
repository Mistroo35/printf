#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} HandleSpecifier;

int printf_pointer(va_list PtrArg);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list PtrArg);
int printf_HEX(va_list PtrArg);
int printf_hex(va_list PtrArg);
int printf_oct(va_list PtrArg);
int printf_unsigned(va_list args);
int printf_bin(va_list PtrArg);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printChar(int Char);
int printString(va_list PtrArg);
int _putchar(char c);
int _printf(const char *Format, ...);

#endif
