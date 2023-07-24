#include "main.h"

/**
 * print_str - function prints a string
 *
 * @args: the va_ list content
 *
 * Return: length of string
*/
int print_str(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	while (*str)
	{
		putchar(*str++);
		len++;
	}
	return (len);
}
/**
 * print_char - function prints a char
 *
 * @args: the va_list content
 *
 * Return: my char
*/
int print_char(va_list args)
{
	char _char = va_arg(args, int);

	return (_char);
}
/**
 * print_perc - function prints percent
 *
 * @va_list: args
 * 
 * Return: value of char
*/
int print_perc(va_list args)
{
	char _char = va_arg(args, int);
	putchar(_char);
	return (1);
}

