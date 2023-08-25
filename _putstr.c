#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _putstr - prints string to output
 * @str: String to be printed
 *
 * Return: number of printed charcters.
 */
int _putstr(va_list str)
{
	char *ptr = va_arg(str, char *);
	int count = 0;

	/* Check for NULL */
	if (ptr == NULL)
	{
		ptr = "(nil)";
	}

	while (*ptr)
	{
		_putchar(*ptr);
		count++;
		ptr++;
	}
	return (count);
}
