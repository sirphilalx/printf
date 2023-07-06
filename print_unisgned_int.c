#include "main.h"

/**
 * print_unsigned_recursive - Prints an unsigned integer recursively.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned_recursive(unsigned int num)
{
    int count = 0;

    if (num / 10)
        count += print_unsigned_recursive(num / 10);

    count += _putchar((num % 10) + '0');

    return count;
}


/**
 * print_unsigned - Prints an unsigned integer to stdout.
 * @args: Arguments list.
 *
 * Return: The number of characters printed.
 */

int print_unsigned_int(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    count = print_unsigned_recursive(num);

    return count;
}

