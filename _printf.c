#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * args_print - Prints the variadic fxn based on specifier
 * @array: array of  structure containing specifier and function pointer
 * @pick: specifies char
 * @args: points to next variadic function.
 * Return: count
 */

int args_print(arrstr *array, char pick, va_list args)
{
	int counter = 0, i;
	int (*func)(va_list) = NULL;

	if (pick == '%')
	{
		_putchar('%');
		counter++;
		return (counter);
	}
	for (i = 0; array[i].fxnpoint != NULL; i++)
	{
		if (pick == array[i].letter)
		{
			func = array[i].fxnpoint;
			break;
		}
	}
	if (func == NULL)
	{
		_putchar('%');
		_putchar(pick);
		counter += 2;
		return (counter);
	}
	counter = func(args);
	return (counter);
}

/**
 * _printf - function same as printf
 * @format: format specifier string
 *
 * Return: count of characters.
 */
int _printf(const char *format, ...)
{
	arrstr array[] = {
		{'c', print_char},
		{'s', _putstr},
		{'d', whole_number},
		{'i', whole_number},
		{'b', print_binary},
		{'\0', NULL}
	};

	const char *hold = format;
	int count = 0;
	char pick;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (hold && *hold)
	{
		if (*hold == '%')
		{
			hold++;
			pick = *hold;
			if (pick == '\0')
			{
				count += _putchar('%');
				return (count);
			}
			count += args_print(array, pick, args);
		}
		else
		{
			_putchar(*hold);
			count++;
		}
		hold++;
	}
	va_end(args);
	return (count);
}
