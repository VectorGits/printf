#include "main.h"
#include <stdio.h>

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
            putchar(*format);
            char_count++;
        }
        else
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                putchar(c);
                char_count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                if (str)
                {
                    while (*str)
                    {
                        putchar(*str);
                        str++;
                        char_count++;
                    }
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                char_count++;
            }
        }
        format++;
    }

    va_end(args);

    return char_count;
}

