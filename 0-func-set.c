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
