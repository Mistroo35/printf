#ifndef MAIN_H
#define MAIN_H

/*Add libraries*/
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/*prototypes*/
int printChar(int Ch);
int handleFormat(char Specifier, va_list PtrArg);
int printDigit(long Number, int Base);
int printHexa(long Number, int Base);
int printString(char *String);
int _printf(const char *format, ...);

#endif
