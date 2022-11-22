#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @args: arguments passed to _printf
 * Return: number of characters printed.
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	/* return 1 because only one character is printed */
	return (1);
}
