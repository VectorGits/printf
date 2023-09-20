#include "main.h"

/**
 * handle_di - Handle 'd' and 'i' conversion specifiers.
 * @args: The va_list of arguments.
 *
 * Return: The number of characters printed.
 */
int handle_di(va_list args)
{
	int num = va_arg(args, int);

	/* Call your custom function to print the integer here */
	/* You can implement the logic to print the integer as needed */

	/* Example: (replace this with your actual logic) */
	int char_count = 0;
	int temp;

	if (num < 0)
	{
		char_count += _putchar('-');
		temp = -num;
	}
	else
	{
		temp = num;
	}

	if (temp / 10)
		char_count += handle_di_recursive(temp / 10);

	char_count += _putchar('0' + (temp % 10));

	return (char_count);
}

/**
 * handle_di_recursive - Recursive function to handle 'd' and 'i'.
 * @num: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int handle_di_recursive(int num)
{
	if (num / 10)
		return (handle_di_recursive(num / 10) + _putchar('0' + (num % 10)));
	return (_putchar('0' + num));
}
