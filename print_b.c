#include "main.h"
/**
 * print_binary - function that print an integer in  binary
 * @args: arg
 *
 * Return: number of charactere printed
 */
int print_binary(va_list args)
{
	unsigned int num;
	int i, j, binary[32];

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	i = 0;
	while (num > 0)
	{
		binary[i++] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary[j] + '0');
	}
	return (i);
}
/**
 * print_unsigned - function that print an unsigned integer
 * @args: arg
 *
 * Return: number of charactere printed
 */
int print_unsigned(va_list args)
{
	unsigned int num;
	int count, i, j, di[10];

	num = va_arg(args, unsigned int);
	count = 0;

	if (num == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		i = 0;
		while (num != 0)
		{
			di[i] = num % 10;
			num /= 10;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar(di[j] + '0');
			count++;
		}
	}
	return (count);
}
/**
 * print_octal - func that print an octal
 * @args: arg
 *
 * Return: numo of characters printed
 */
int print_octal(va_list args)
{
	unsigned int num;
	int count, i, j, o[100];

	count = 0;
	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		i = 0;
		while (num != 0)
		{
			o[i] = num % 8;
			num /= 8;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar(o[j] + '0');
			count++;
		}
	}
	return (count);
}
/**
 * print_x - func that hex lowercase
 * @args: arg
 *
 * Return: num of char printed
 */
int print_x(va_list args)
{
	unsigned int num;
	int count, i, j, x[100];
	char x_di[] = "0123456789abcdef";

	count = 0;
	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		i = 0;
		while (num != 0)
		{
			x[i] = x_di[num % 16];
			num /= 16;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar(x[j]);
			count++;
		}
	}
	return (count);
}
