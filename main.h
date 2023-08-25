#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct structure - structure holding a char and a function pointer.
 * @letter: format specifier charcater
 * @fxnpoint: Function pointr to handle specifier
 */
struct structure
{
	char letter;
	int (*fxnpoint)(va_list args);
};
int _putchar(char c);
int print_char(va_list args);
int _printf(const char *format, ...);
#endif
