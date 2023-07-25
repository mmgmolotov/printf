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
	int count, digit, i, j, digit[10];
	
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
			digit[i] = num % 10;
			num /= 10;
			i++;
		}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(digits[j] + '0');
		count++;
	}
}
