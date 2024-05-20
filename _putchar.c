#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - Writes the character to output
 * @c: Character
 *
 * Return: If succesful, 1 else 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - writes character c to output
 * @args: va_list argumnet to retrieve a character to print
 * Return: If successful, 1 else 0.
 */
int print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}
