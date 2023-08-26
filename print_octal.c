#include "main.h"
#include <stdarg.h>

/**
 * oct_print - prints an integer in octal to the stdout
 * @n: unsigned integer to be printed
 *
 * Return: COUNT of characters printed
 */
int oct_print(unsigned int n)
{
	unsigned int lastn;
	int COUNT = 0;

	/*get last digit and remainder as absolute value*/
	lastn = n % 8;
	n = n / 8;
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		COUNT = oct_print(n);
	}
	_putchar(48 + lastn);
	COUNT++;
	return (COUNT);
}

/**
 * oct_printal - prints an integer in octal to the stdout
 * @args: va_list argument with an unsigned integer to be printed
 *
 * Return: COUNT of characters printed
 */
int oct_printal(va_list args)
{
	unsigned int n;
	int COUNT;

	n = va_arg(args, unsigned int);
	COUNT = oct_print(n);
	return (COUNT);
}
