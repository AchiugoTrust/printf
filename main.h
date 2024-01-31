#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format- output structure
 * @ph: character
 * @function: function pointer
*/
typedef struct format
{
	char *ph;
	int (*function)();
} match;

int _putchar(char c);
int print_char(va_list ap);
int _printf(const char *format, ...);
int print_percent(void);
int print_string(va_list value);
int string_len(char *x);
int print_int(va_list val);
int print_bin(va_list value);
int print_int(va_list val);
int print_octal(va_list value);
int print_unsigned(va_list val);
int print_hex(va_list val);
#endif