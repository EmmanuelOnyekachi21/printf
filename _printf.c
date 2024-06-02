#include "main.h"
#include <stdio.h>

/**
 * handle_specifier - A helper function to handle specifiers.
 * @spec: The character pointed to in the memory.
 * @args: va_list containing the character pointed to.
 * @specifiers: References the array carrying the function pointer and spec.
 *
 * Return: The number of characters printed.
 */
int handle_specifier(char spec, va_list args, spec_fxn specifiers[])
{
	int i = 0;
	int count = 0;

	if (spec == '%')
	{
		count = _putchar('%');
		return (count);
	}

	while (specifiers[i].spec)
	{
		if (spec == specifiers[i].spec)
		{
			if (specifiers[i].func != NULL)
				return (specifiers[i].func(args));
			else if (specifiers[i].func == NULL)
			{
				/* Function pointer is NULL */
				count += _putchar('%');
				count += _putchar(spec);
				return (count);
			}
		}
		i++;
	}

	/* Handle when the function pointer is NULL */
	count += _putchar('%');
	count += _putchar(spec);
	return (count);
}

/**
 * _printf - A custom implementation of the printf function.
 * @format: Format specifier string.
 *
 * Return: Count of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	spec_fxn specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'\0', NULL}
	};

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;/* Move past '%' */
			if (*format == '\0')
			{
				return (-1);
			}
			count += handle_specifier(*format, args, specifiers);
		}
		else
			count += _putchar(*format);
		format++;/* Move to the next character in format. */
	}

	va_end(args);

	return (count);
}
