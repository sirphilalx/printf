#include "main.h"

/**
 * print_pointer - Prints a pointer address.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */

int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	count += print_hex_address(address);

	return (count);
}

/**
 * print_hex_address - Prints an unsigned long integer in hexadecimal format.
 * @address: The address to be printed.
 *
 * Return: The number of characters printed.
 */

int print_hex_address(unsigned long int address)
{
	int count = 0;
	int remainder;

	if (address / 16)
		count += print_hex_address(address / 16);

	remainder = address % 16;

	if (remainder < 10)
		count += _putchar(remainder + '0');
	else
		count += _putchar(remainder - 10 + 'a');

	return (count);
}
