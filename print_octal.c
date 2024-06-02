#include "main.h"
#include <stdio.h>
/**
 * octal_helper - A helper function for the print_octal function.
 * @number: An unsigned integer to be processed.
 *
 * Return: The number of characters printed.
 */
int octal_helper(unsigned int number)
{
	unsigned int last_number;
	int count = 0;

	last_number = number % 8;
	number = number / 8;

	if (number != 0)
		count += octal_helper(number);

	count += _putchar(last_number + '0');

	return (count);
}
/**
 * print_octal - Converts an unsigned int to octal and prints it.
 * @args: va_list containing the unsigned int to convert.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
	int count = 0;
	int number = va_arg(args, unsigned int);

	count += octal_helper(number);
	return (count);

}
