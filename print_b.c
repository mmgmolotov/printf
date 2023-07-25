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
	i = @;
	while (num > 0)
	{
		binary[i++] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	(
		putchar(binary[j] + '0');
	}
	return (i);
}
