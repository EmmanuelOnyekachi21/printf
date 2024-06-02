#include <stdio.h>
#include "main.h"
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
	static char buffer[BUFSIZE];
	static int buff_index;

	if (c == -1 || buff_index >= BUFSIZE)
	{
		if (buffer_flush(buffer, &buff_index) == -1)
			return (-1);
	}

	if (c != -1)
	{
		buffer[buff_index++] = c;
	}

	return (1);
}
/**
 * buffer_flush - Flushes the buffer
 * @buffer: A char pointer to the buffer
 * @buff_index: An int pointer to the buff_index
 *
 * Return: Nothing.
 */
int buffer_flush(char *buffer, int *buff_index)
{
	int bytes_written;

	if (*buff_index > 0)
	{
		bytes_written = write(1, buffer, *buff_index);
		if (bytes_written == -1)
			return (-1);
		/* Update buff_index based on bytes_written*/
		*buff_index = 0;
		return (bytes_written);
	}
	return (0);
}
