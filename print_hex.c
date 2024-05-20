#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: count.
 */
int print_hex(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned long num = va_arg(val, unsigned int);
	unsigned long temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
