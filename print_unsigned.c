#include "main.h"
#include <stdio.h>
/**
 * unsigned_helper - A helper function for the print_unsigned function.
 * @number: Number to be processed.
 *
 * Return: The number of characters printed.
 */
int unsigned_helper(unsigned int number)
{
	int count = 0;
	unsigned int last_number;

	last_number = number % 10;
	number = number / 10;

	if (number != 0)
		count += unsigned_helper(number);

	count += _putchar(last_number + '0');

	return (count);
}

/**
 * print_unsigned - Handles the %u specifier
 * @args: va_list
 *
 * Return: The number of characters printed
 */
int print_unsigned(va_list args)
{
	int count = 0;
	unsigned int number = va_arg(args, unsigned int);

	count += unsigned_helper(number);
	return (count);
}
