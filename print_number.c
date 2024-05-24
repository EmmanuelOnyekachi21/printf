#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _abs - returns absolute of a number except INT_MIN
 * @n: number to be processed.
 *
 * Return: returns absolute int value
 */
int _abs(int n)
{
	int absolute_number;

	absolute_number = (n < 0) ? (n * -1) : n;

	return (absolute_number);
}

/**
 * print_number - Actual functions that processes the number printing.
 *
 * @value: The number gotten from the va_list.
 *
 * Return the number of count
 */
int print_number(int value)
{
	int last_number, operand, count = 0;

	if (value < 0)
	{
		_putchar('-');
		count++;
	}
	last_number = _abs(value % 10);
	operand = _abs(value / 10);

	if (operand != 0)
	{
		count += print_number(operand);
	}
	_putchar('0' + last_number);
	count++;

	return (count);
}

/**
 * print_integer - Prints a number.
 *
 * @args: va_list containing the number to print.
 * Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int number;
	int count = 0;

	number = va_arg(args, int);
	count = print_number(number);
	return (count);
}
