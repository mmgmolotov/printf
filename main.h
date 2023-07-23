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

typedef struct {
	char spc;
	void (*hnd)(va_list);
} FH;

#endif
