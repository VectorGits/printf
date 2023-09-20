#include "main.h"
#include <stdio.h>


/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: number of printed char (null byte excluded).
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
			if (*format == 'c')
			{
				char_count += print_char(args);
			}
			else if (*format == 's')
			{
				char_count += print_string(args);
			}
			else if (*format == '%')
			{
				char_count += _putchar('%');
			}
			else if (*format == 'd' || *format == 'i')
			{
				char_count += handle_di(args);
			}
			else if (*format == 'b')
			{
				char_count += print_binary(args, buffer, 0, 0, 0, 0);
			}
		}
		format++;
	}

	va_end(args);

	return (char_count);
}

