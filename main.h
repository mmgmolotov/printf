#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
void print_str(va_list args);
void print_char(va_list args);
void print_perc(va_list args);
/**
 * struct fh - for handling format
 * @spc: format specifier
 * @hndl: handler
 * description: this struct for handling format
 */

typedef struct fh
{
	char spc;
	void (*hndl)(va_list);
} FH;

#endif
