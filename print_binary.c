#include "main.h"
#include <stdio.h>
/**
 * binary_helper - A helper function for the print_binary function.
 * @number: An unsigned integer to be processed.
 *
 * Return: The number of characters printed.
 */
int binary_helper(unsigned int number)
{
	unsigned int last_number;
	int count = 0;

	last_number = number % 2;
	number = number / 2;

	if (number != 0)
		count += binary_helper(number);

	count += _putchar(last_number + '0');

	return (count);
}
/**
 * print_binary - Converts an unsigned int to binary and prints it.
 * @args: va_list containing the unsigned int to convert.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
	int count = 0;
	int number = va_arg(args, unsigned int);

	count += binary_helper(number);
	return (count);

}
