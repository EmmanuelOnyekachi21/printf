#include "main.h"
#include <stdio.h>
/**
 * hex_helper - An helper fxn for the print_hex
 * @number: An unsigned int number to be processed
 *
 * Return: The number of characters printed.
 */
int hex_helper(unsigned int number)
{
	int count = 0;
	unsigned int last_number;

	last_number = number % 16;
	number /= 16;

	if (number != 0)
		count += hex_helper(number);

	if (last_number < 10)
		count += _putchar(last_number + '0');
	else if (last_number > 10)
		count += _putchar(last_number - 10 + 'a');

	return (count);

}
/**
 * print_hex - Print the hexadecimal representation of a number.
 *
 * @args: va_list args
 *
 * Return: The number of character printed.
 */
int print_hex(va_list args)
{
	int count = 0;
	int number = va_arg(args, unsigned int);

	count += hex_helper(number);
	return (count);
}
