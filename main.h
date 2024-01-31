#ifndef MAIN_H

/*Macro definitions*/
#define MAIN_H

/*Libraries*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>


int printChar(int ch);
int printString(const char *string);
int printInt(int number);
int printUnsignedInt(unsigned int num);
int printOctal(unsigned int);
int printBinary( unsigned int n);
int printLowerHexa( unsigned int n);
int printUpperHexa(unsigned int n);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
