#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/*Only functions prototype here*/
int check_format(const char **format, va_list args);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_perc(va_list args);
int print_decimal(va_list args);
int print_int(int n);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);


/**
 * struct fh - for handling format
 * @spc: format specifier
 * @hndl: handler
 * description: this struct for handling format
 */

typedef struct fh
{
	char spc;
	int (*hndl)(va_list);
} FH;

#endif
