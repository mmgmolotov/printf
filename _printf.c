#include "main.h"
/**
 * _printf - function that print all
 * @format: from it the function get the format
 * Return: input given
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			counter += check_format(&format, args);
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

/**
 * check_format - check the format conditions
 *
 * @format: argument
 * @va_list: list of args
 *
 * Return: the prt value
*/
int check_format(const char **format, va_list args)
{
	int i = 0, prt = 0, add = 0;

	FH def[] = {
		{'s', print_str}, {'c', print_char}, {'%', print_perc}, {'\0', NULL},
	};
	while (def[i].spc)
	{
		if (**format == def[i].spc)
		{
			prt += def[i].hndl(args);
			add++;
			break;
		}
		i++;
	}
	if (!add)
	{
		putchar('%');
		putchar(**format);
		prt += 2;
	}
	return (prt);
}
