#include "main.h"

/**
 * print_base - prints a string in a certain base
 * @str: string to print
 */

void print_base(char *str)
{
	int j;

	for (j = 0; str[j]; j++)
		_putchar(str[j]);
}
