#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - Provides the output in respect to a format.
 * @format: String format
 *
 * Return: Amount of char printed, null byte is excluded
 */
int _printf(const char *format, ...)
{
	int char_count = 0; /* Count of printed characters */
	int index = 0; /* Index for iterating through the format string */

	va_list args;
	va_start(args, format);

	/* Loop through the format string */
	while (format[index] != '\0')
	{
		/* Handle regular characters */
		if (format[index] != '%')
		{
			char_count += _putchar(format[index]);
			index++;
		}
		/* Handle format specifiers */
		else if (format[index] == '%' && format[index + 1] != ' ')
		{
			switch (format[index + 1])
			{
				case 'c':
					/* Print a character from variable arguments */
					char_count += _putchar(va_arg(args, int));
					break;
				case 's':
					char_count += print_custom_string(va_arg(args, char *));
					break;
				case '%':
					/* Print a literal '%' character */
					char_count += _putchar('%');
					break;
				case 'd':
				case 'i':
					char_count += print_custom_decimal(va_arg(args, int));
					break;
				case 'b':
					char_count += print_custom_binary(va_arg(args, int));
					break;
				case 'u':
					char_count += print_custom_unsigned(va_arg(args, unsigned int));
					break;
				default:
					break;
			}
			index += 2;
		}
	}

	va_end(args);

	return char_count;
}

