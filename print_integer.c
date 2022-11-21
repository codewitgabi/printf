#include "main.h"

/**
 * print_integer - prints a guven integer passed as argument to _printf()
 * @args: arguments passed to _printf()
 * Return: length of charcters printed
 */

int print_integer(va_list args)
{
	int num, len = 0, n = 1;

	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	while (num / n)
	{
		n *= 10;
		len++;
	}

	while (n > 1)
	{
		n /= 10;
		_putchar((num / n % 10) + '0');
	}

	return (len);
}
