#include "main.h"
/**
 * print_int
 * @n: integer arg
 *
 * Return: the number of characters printed
 */
int print_int(int n)
{
	int i, num, count, div, digit, temp;

	count = 0;
	digit = 0;
	div = 1;
	num = n;
	if (n == INT_MIN)
	{
		putchar('-');
		putchar('2');
		return (print_int(147483648));
	}
	if (num < 0)
	{
		putchar('-');
		count++;
		num = -num;
	}
	else
	{
		num = n;
		temp = num;
		while (temp != 0)
		{
			temp /= 10;
			digit++;
		}
	}
	for (i = 1; i < digit; i++)
	{
		div *= 10;
	}
	while (div != 0)
	{
		digit = num / div;
		putchar(digit + '0');
		num -= digit * div;
		div /= 10;
		count++;

	}
	return (count);
}
/**
 * print_decimal - print decimal num
 * @args: args
 *
 * Return: the num of characters printed
 */
int print_decimal(va_list args)
{
	int value;

	value = va_arg(args, int);
	return (print_int(value));
}