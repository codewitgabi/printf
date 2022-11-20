#ifndef HEADER
#define HEADER
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct formatSpecifiers - holds two arguments.
 * first is the next character passed after % in the string to be printed
 * second is a function pointer to call the right function that prints
 * based on c
 */

typedef struct formatSpecifiers
{
	char *c;
	int (*f)(va_list);

} spc;

int _printf(const char *format, ...);
int checker(const char *format, spc struct_array[], va_list args);
char _putchar(int c);
int print_char(va_list args);
int print_str(va_list args);
int print_percentage(va_list args);

#endif
