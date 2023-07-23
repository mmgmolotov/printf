#include "main.h"

/**
 * print_str - function prints a string
 *
 * @args: the va_ list content
*/
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	while (str)
	{
		putchar(*str++);
	}
}

/**
 * print_char - function prints a char
 *
 * @args: the va_list content
*/
void print_char(va_list args)
{
	char _char = va_list(arg, int);
	putchar(_char);
}

/**
 * print_perc - function prints percent
 *
 * @args: the va_list content
*/
void print_perc(va_list args)
{
	putchar('%');
}