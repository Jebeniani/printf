#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_decimal(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int space(const char *format, int f_i);
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_spec_func(char spec))(va_list);

/**
* struct format - Struct spec_t.
* @sym: symbol.
* @f: function.
*/
typedef struct format
{
	char *sym;
	int (*f)(va_list);
} spec_t;

#endif
