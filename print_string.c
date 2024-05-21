#include "main.h"
#include <stdio.h>

/**
 * print_string - Prints a string.
 *
 * @args: va_list containing the string to print.
 * Return: The number of characters printed.
 */

int print_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int count = 0;

	if (str == NULL)
		str = "(nil)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
