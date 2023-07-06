#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer to stdout.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	if (num / 10)
		count += print_unsigned(num / 10);

	count += _putchar((num % 10) + '0');

	return count;
}
