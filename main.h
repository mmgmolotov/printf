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
 * struct - for handling format
 * @spc: format specifier
 * @hndl: handler
 */

typedef struct {
	char spc;
	void (*hndl)(va_list);
} FH;

#endif
