#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
typedef struct specify_function
{
	char spec;
	int (*func)(va_list);
} spec_fxn;
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_char(va_list args);
int handle_specifier(char spec, va_list args, spec_fxn specifiers[]);
#endif /* MAIN_H */
