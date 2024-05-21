#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes the character to stdout.
 *
 * @c: Character to be printed.
 *
 * Return: If successful, 1 else 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
