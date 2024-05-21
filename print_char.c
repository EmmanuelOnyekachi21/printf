#include "main.h"
#include <stdio.h>

/**
 * print_char - Prints a char.
 *
 * @args: va_list containing the char to print.
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c;

	c = (char) (va_arg(args, int));
	_putchar(c);
	return (1);
}
