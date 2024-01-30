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
int printChar(int ch);
int printString(const char *string);
int _putchar(char c);
int printInt(int Int);
int printDec(int Dec);
int _printf(const char *format, ...);

#endif
