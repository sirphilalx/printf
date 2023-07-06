#include "main.h"

/**
 * _print_string - Prints a string.
 * @args: The va_list containing the string argument.
 *
 * Return: The number of characters printed.
 */

int _print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
