#include "main.h"

/**
 * _print_percent - Prints a percent sign.
 * @args: The va_list (unused).
 *
 * Return: The number of characters printed.
 */

int _print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
