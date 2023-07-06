#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
			return (1);
	}

	count = print_octal_recursive(num);

	return (count);
}
