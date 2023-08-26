#include <stdarg.h>
#include <limits.h>
#include "main.h"

/**
 * absolute - returns absolute of a number.
 * @n: nummber to be processed
 *
 * Return: returns absolute int value
 */
int absolute(int n)
{
	int absolute_number;
	absolute_number = (n < 0) ? (n * -1) : n;
	return (absolute_number);
}

/**
 * whole_num - prints an integer to output
 * @n: Integer to be printed.
 *
 * Return: count of numbers printed.
 */
int whole_num(int n)
{
	int lastn, count = 0;

	/* Check for negative number */
	if (n < 0)
	{
		_putchar('-');
		count++; /* To ensure the negative sign gets counted too */
	}
		lastn = absolute(n % 10);
		n = absolute(n / 10);

		if (n != 0)
			count += whole_num(n);
		_putchar(48 + lastn);
		count++;
		return (count);
}

/**
 * whole_number - prints an integer to output
 * @args: va_list argument
 *
 * Return: count of numbers printed.
 */
int whole_number(va_list args)
{
	int count;
	int i;

	i = va_arg(args, int);
	count = whole_num(i);
	return (count);
}
