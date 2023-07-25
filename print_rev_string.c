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
	char temp_str[20], temp, *str;

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
	while (*str)
	{
		str++;
		len++;
	}
	for (i = 0; i <= len; i++)
		temp_str[i] = str[i];
	temp_str[i] = '\0';
	for (i = 0; i < len / 2; i++)
	{
		temp = temp_str[i];
		temp_str[i] = temp_str[len - i - 1];
		temp_str[len - i - 1] = temp;
	}
	for (i = 0; temp_str[i] != 0 && i < len; i++)
		putchar(temp_str[i]);
	}
	return (len);
}
