#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>


/**
 * struct spc - struct for format identifiers
 *
 * @spec: the format specifier
 * @f: pointer to function
*/

typedef struct spc
{
	char *spec;
	int (*f)(va_list fmt);
} spec_f;

int _putchar(char c);
int _printf(const char *format, ...);
int fmt_spec(const char *format, va_list fmt);
int c_spec(va_list fmt);
int d_spec(va_list fmt);
int i_spec(va_list fmt);
int s_spec(va_list fmt);
int is_spec(char c);

#endif
