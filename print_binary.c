#include "main.h"

/**
 * print_binary - prints the binary format of a number
 * @args: arguments passed to _print()
 * Return: length of printed characters.
 */

int print_binary(va_list args)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num /= 2;
	}
	str[i] = '\0';
	rev_str = reverse_string(str);
	if (str == NULL)
		return (-1);
	print_base(rev_str);
	free(str);
	free(rev_str);

	return (len);
}
