#include "main.h"

/**
 * print_str - prints a string literal to stdout
 * @args: list lf arguments passed to _printf
 * Return: number of characters printed
 */

int print_str(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);
	return (len);
}
