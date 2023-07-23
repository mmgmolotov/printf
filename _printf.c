#include "main.h"
/**
 * _printf - function that print all
 * @format: from it the function get the format
 * Return: input given
 */
int _printf(const char *format, ...)
{
	FH def[] = {
		{'s', print_str}, {'c', print_char}, {'\0', NULL},
	};
	va_list args;
	int counter = 0, i = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
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
	va_end(args);
	return (counter);
}
