#include "main.h"

/**
 * print_integer - Prints an integer to stdout.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += print_unsigned(num);

	return (count);
}
