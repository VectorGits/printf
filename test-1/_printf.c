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
	int char_count = 0; /* Count character printed*/
	int index = 0; /* Iterating index through string format */
	va_list args;
	va_start(args, format);

	/* Loop through the format string */
	while (format[index] != '\0')
	{
		/* Regular character handled */
		if (format[index] != '%')
		{
			char_count += _putchar(format[index]);
			index++;
		}
		/* Format specifiers handled */
		else if (format[index] == '%' && format[index + 1] != ' ')
		{
			switch (format[index + 1])
			{
				case 99 :
					/* Print a character from variable arguments */
					char_count += _putchar(va_arg(args, int));
					break;
				case 115 :
					char_count += print_custom_string(va_arg(args, char *));
					break;
				case '%':
					/* Print a literal '%' character */
					char_count += _putchar('%');
					break;
				case 100:
				case 105:
					char_count += print_custom_decimal(va_arg(args, int));
					break;
				case 98:
					char_count += print_custom_binary(va_arg(args, int));
					break;
				case 117:
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

