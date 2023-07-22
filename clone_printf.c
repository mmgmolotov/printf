#include "main.h"
/**
 * _printf - function that print all
 * @format: from it the function get the format
 * Return: input given
 */
int _printf(const char *format, ...)
{
	char *str;
	int counter;
	va_list args;

	counter = 0;
	va_start(args, format);

	while (*format)
		if (*format == '%')
			format++;
			if (*format == 's')
				str = (va_arg(args, char *);
				while (*str)
					putchar(str++);
					counter++;
			else if (*format == 'c')
				putchar(va_arg(args, int);
				counter++;
			else if (*format == '%')
				putchar('%');
				counter++;
			else
				putchar(*format);
				counter++;
		else
			putchar(*format);
			count++;
		format++;
	va_end(args);
	return (counter);
}
