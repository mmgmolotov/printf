#include "main.h"

/**
 * print_str - function prints a string
 * @args: the  content
 * Return: length of string
*/
int print_str(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	while (*str)
	{
		putchar(*str++);
		len++;
	}
	return (len);
}
/**
 * print_char - function prints a char
 * @args: the content
 * Return: my char
*/
int print_char(va_list args)
{
	char _char = va_arg(args, int);

	putchar(_char);
	return (1);
}

/**
 * print_perc - function prints percent
 *
 * @args: argument
 * Return: value of char
*/
int print_perc(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}
/**
 * print_S - uppercas
 *
 * @args: argument
 *
 * Return: length
*/
int print_S(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);
	char hex;

	if (!str)
		str = "(null)";
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			putchar('\\');
			putchar('x');

			hex = (*str >> 4) & 0xF;
			if (hex < 10)
				putchar(hex + '0');
			else
				putchar(hex - 10 + 'A');
			hex = *str & 0xF;
			if (hex < 10)
				putchar(hex + '0');
			else
				putchar(hex - 10 + 'A');
			len += 4;
		}
		else
		{
			putchar(*str);
			len++;
		}
		str++;
	}
	return (len);
}
