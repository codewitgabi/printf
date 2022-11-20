#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints string character to stdout using the specified format
 * specifiers.
 * @format: string literal to be printed.
 * Return: number of characters printed tk stdout.
 */

int _printf(const char *format, ...)
{
	int num_of_printed_chars;
	spc spc_func[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percentage},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	num_of_printed_chars = checker(format, spc_func, args);
	va_end(args);

	return (num_of_printed_chars);
}
