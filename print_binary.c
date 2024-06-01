#include "main.h"
#include <stdio.h>
/**
 * print_binary - Converts an unsigned int to binary and prints it.
 * @args: va_list containing the unsigned int to convert.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
	int count = 0;
	int i = 0;
	char buffer[32];

	int number = va_arg(args, unsigned int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (number > 0)
	{
		buffer[i++] = (number % 2) + '0';
		number /= 2;
	}

	while (i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}
