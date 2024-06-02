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
int _abs(int n);
int print_integer(va_list args);
int print_number(int value);
int print_octal(va_list args);
int octal_helper(unsigned int number);
int unsigned_helper(unsigned int number);
int print_unsigned(va_list args);
int print_binary(va_list args);
int binary_helper(unsigned int number);
int print_HEX(va_list args);
int HEX_helper(unsigned int number);
int print_hex(va_list args);
int hex_helper(unsigned int number);
#endif /* MAIN_H */
