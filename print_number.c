#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints a number.
 *
 * @args: va_list containing the number to print.
 * Return: The number of characters printed.
 */
int print_number(va_list args)
{
	int i = 0;
	char buffer[12];
	int number;
	int is_negative = 0;
	int count = 0;

	number = va_arg(args, int);

	if (number == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (number < 0)
	{
		is_negative = 1;
		number *= -1;
	}

	while (number > 0)
	{
		buffer[i] = (number % 10) + '0';
		i++;
		number /= 10;
	}

	if (is_negative)
		buffer[i++] = '-';

	while (i--)
		count += _putchar(buffer[i]);

	return (count);
}
