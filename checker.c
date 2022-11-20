#include "main.h"

/**
 * checker - checks for valid format specifiers and makes a call
 * to the function that is sufficient enough to carry out that operation
 * @format: the string passed to _printf. Thus string will be iterated
 * one by one and checked for format specifiers.
 * @struct_array: an array of struct that holds valid format specofiers and
 * assigns them to a function.
 * @args: holds the arguments passed to _printf
 * Return: number of arguments printed successfully.
 */

int checker(const char *format, spc struct_array[], va_list args)
{
	int num_of_printed_char = 0, i, j, val;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; struct_array[j].c != NULL; j++)
			{
				if (format[i + 1] == struct_array[j].c[0])
				{
					val = struct_array[j].f(args);
					if (val == -1)
						return (-1);
					num_of_printed_char += val;
					break;
				}
			}
			if (struct_array[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] == '\0')
					return (-1);
				_putchar(format[i]);
				_putchar(format[i + 1]);
				num_of_printed_char += 2;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			num_of_printed_char++;
		}
	}

	return (num_of_printed_char);
}
