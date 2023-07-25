#include "main.h"
/**
 * print_rev - function prints a string in reverse
 *
 * @args: argument
 *
 * Return: length of string
*/
int print_rev(va_list args)
{
	int i, len = 0;
	char *str;

	str = va_arg(args, char *);
	if (!str)
	{
		str = "(null)";
		while (*str)
		{
			putchar(*str++);
			len++;
		}
	}
	else
	{
	while (str[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
		putchar(str[i]);
	}
	return (len);
}
