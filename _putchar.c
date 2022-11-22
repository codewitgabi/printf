#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: character to print to stdout
 * Return: int
 */

char _putchar(int c)
{
	return (write(1, &c, 1));
}
