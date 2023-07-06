#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_conversion(format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}
