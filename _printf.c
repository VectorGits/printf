#include "main.h"
#include <stdio.h>

/**
 * _putchar - A custom function to write a character to stdout.
 * @c: The character to write.
 *
 * Return: The number of characters written (always 1).
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_char - Print a character.
 * @args: The va_list of arguments.
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

/**
 * handle_di - Handle the "d" and "i" conversion specifiers.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int handle_di(va_list args)
{
	int num = va_arg(args, int);
	int char_count = 0;

	/* Assuming your buffer handling code is here */
	/* You can add code to print 'num' to your buffer or stdout here */

	return char_count;
}

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			char_count += _putchar(*format);
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					char_count += print_char(args);
					break;
				case 's':
					char_count += print_string(args);
					break;
				case '%':
					char_count += _putchar('%');
					break;
				case 'd':
				case 'i':
					char_count += handle_di(args);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					char_count += 2;
					break;
			}
		}
		format++;
	}

	va_end(args);

	return char_count;
}

