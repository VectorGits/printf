#include "main.h"

/**
 * print_unsigned - Convert and print an unsigned integer in decimal.
 * @args: The va_list of arguments.
 * @buffer: The character buffer to store the result.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args, char buffer[])
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	/* Convert the unsigned integer to a string and print it */
	count = sprintf(buffer, "%u", num);

	/* Print the characters from the buffer */
	for (int i = 0; i < count; i++)
	{
		_putchar(buffer[i]);
	}

	return count;
}

