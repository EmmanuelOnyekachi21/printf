#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct structures - structure holding a char and a function pointer.
 * @letter: format specifier charcater
 * @fxnpoint: Function pointr to handle specifier
 */
typedef struct structures
{
	char letter;
	int (*fxnpoint)(va_list args);
} arrstr;
int _putchar(char c);
int print_char(va_list args);
int whole_number(va_list args);
int _printf(const char *format, ...);
int _putstr(va_list str);
#endif
