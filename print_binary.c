#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int binary[32];
	int i;

	if (num == 0)
	{
		_putchar('0');
			return (1);
	}

	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		count++;
	}

	return (count);
}
