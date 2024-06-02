#include "main.h"
#include <stdio.h>
/**
 * HEX_helper - An helper fxn for the print_HEX
 * @number: An unsigned int number to be processed
 *
 * Return: The number of characters printed.
 */
int HEX_helper(unsigned int number)
{
	int count = 0;
	unsigned int last_number;

	last_number = number % 16;
	number /= 16;

	if (number != 0)
		count += HEX_helper(number);

	if (last_number < 10)
		count += _putchar(last_number + '0');
	else if (last_number > 10)
		count += _putchar(last_number - 10 + 'A');

	return (count);

}
/**
 * print_HEX - Print the HEXadecimal representation of a number.
 *
 * @args: va_list args
 *
 * Return: The number of character printed.
 */
int print_HEX(va_list args)
{
	int count = 0;
	int number = va_arg(args, unsigned int);

	count += HEX_helper(number);
	return (count);
}
