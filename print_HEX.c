#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: COUNT.
 */
int print_HEX(va_list val)
{
	int i;
	int *array;
	int COUNT = 0;
	unsigned long int num = va_arg(val, unsigned int);
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		COUNT++;
	}
	COUNT++;
	array = malloc(COUNT * sizeof(int));
	if (array == NULL)
		return (-1);

	for (i = 0; i < COUNT; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = COUNT - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (COUNT);
}
