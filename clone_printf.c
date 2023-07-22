#include "main.h"

/***/
int _printf(const char *format, ...)
{
	char *str;
	int counter;
	va_list args;

	conter = 0;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if(*format == 's')
			{
				str = (va_arg(args, char *);
				while (*str)
				{
					putchar(str++);
					counter++;
				}
			}
			else if (*format == 'c')
			{
				putchar(va_arg(args, int);
				counter++;
			}
			else if (*format == '%')
			{
		}
	}
