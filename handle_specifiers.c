#include "main.h"

/**
 * handle_conversion - Handles the conversion specifier.
 * @format: The format string.
 * @args: The va_list containing the additional arguments.
 *
 * Return: The number of characters printed.
 */

int handle_conversion(const char *format, va_list args)
{
	int count = 0;
	int i;
	print_func_t funcs[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'%', _print_percent},
		{'i', print_integer},
		{'d', print_integer},
		{'b', print_binary},
		{'\0', NULL}
	};

	for (i = 0; funcs[i].func != NULL; i++)
	{
		if (funcs[i].specifier == *format)
		{
			count += funcs[i].func(args);
			break;
		}
	}

	if (funcs[i].func == NULL)
	{
		_putchar('%');
		_putchar(*format);
		count += 2;
	}

	return (count);
}
