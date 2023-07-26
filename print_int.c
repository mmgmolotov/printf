#include "main.h"
/**
 * print_int - print integer
 * @n: integer arg
 *
 * Return: the number of characters printed
 */
int print_int(int n)
{
	unsigned int num;
	int count, neg, i, temp, div, digit;

	count = 0;
	div = 1;
	digit = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}
	for (i = 1; i < digit; i++)
	{
		div *= 10;
	}
	if (neg)
		putchar('-');
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
/**
 * print_address - function prints address in hexadecimal
 *
 * @args: argument
 *
 * Return: address of num
*/
int print_address(va_list args)
{
	char *str;
	int i, j, num = 0;

	char hex[16] = "0123456789abcdef";
	uintptr_t address = (uintptr_t)va_arg(args, void *);
	unsigned int temp_address = address;

	if (!address)
	{
		str = "(nil)";
		while (*str)
			putchar(*str++);
		return (3);
	}
	else
	{
		putchar('0');
		putchar('x');
		while (temp_address != 0)
		{
			temp_address >>= 4;
			num++;
		}
		for (i = num; i >=  0; i--)
		{
			j = (address >> (i * 4)) & 0xF;
			putchar(hex[j]);
		}
	}
	return (num + 2);
}
