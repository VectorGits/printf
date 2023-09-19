#include "main.h"
/**
 * _putchar - A custom function to write a character to stdout.
 * @c: The character to be written.
 *
 * Return: The number of characters written (1).
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
