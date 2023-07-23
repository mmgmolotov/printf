#include "main.h"
/**
 * _printf - function that print all
 * @format: from it the function get the format
 * Return: input given
 */
int _printf(const char *format, ...)
{
	FH def[] = { {'s', print_str}, {'c', print_char},
		{'%', print_perc}, {'\0', NULL} };
	va_list args;
	int counter, i;
	char c;

	va_start(args, format);
	counter = 0;
	while (c == *format++)
	{
		if (c == '%')
		{
			c = *format++;
			if (c == '%')
			{
				putchar('%');
				counter++;
			}
			else
			{
			i = 0;
			while (def[i].spc != '\0')
			{
				if (*format == def[i].spc)
				{
					def[i].hndl(args);
					counter++;
					break;
				}
				i++;
			}
			if (def[i].spc == '\0')
			{
				putchar('%');
				putchar(*format);
				counter += 2;
			}
			}
		else
		{
			putchar(*format);
			counter++;
		}
		format++;
		}
	}
	va_end(args);
	return (counter);
}
