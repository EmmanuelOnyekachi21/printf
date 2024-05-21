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
	int count = 0;

	count += _putchar(va_arg(args, int));
	return (count);
}
