#include "main.h"

/**
 * print_char - Print a char.
 * @args: va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	return _putchar(va_arg(args, int));
}

/**
 * print_string - Print a string.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int char_count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		char_count++;
		str++;
	}

	return char_count;
}
