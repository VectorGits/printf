#include "main.h"

/**
 * print_char - Print a char.
 * @args: va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
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

	return (char_count);
}


/**
 * print_binary - Convert and print an unsigned integer in binary.
 * @types: The va_list of arguments.
 * @buffer: The character buffer to store the result.
 * @flags: Flags (not used in this simplified example).
 * @width: Width (not used in this simplified example).
 * @precision: Precision (not used in this simplified example).
 * @size: Size (not used in this simplified example).
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list types, char buffer[],
                 int flags, int width, int precision, int size)
{
    unsigned int num = va_arg(types, unsigned int);
    unsigned int binary[32];  // Assuming 32-bit binary representation
    int i, count = 0;

    if (num == 0)
    {
        buffer[0] = '0';
        return 1;
    }

    for (i = 0; i < 32; i++)
    {
        binary[i] = num & 1;
        num >>= 1;
    }

    for (i = 31; i >= 0; i--)
    {
        buffer[count] = (binary[i] == 1) ? '1' : '0';
        count++;
    }

    return count;
}

