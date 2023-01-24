#include <stdio.h>
#include <stdarg.h>
/**
* _printf - prints anything
*
* @format: the format string
*
* first argument for the _printf , format
* fmt_spec contains the specifiers for the result
*
* Return: number of characters to description
*/
int _printf(const char *format, ...)
{
va_list fmt;
va_start(fmt, format);
int result = fmt_spec(format, fmt);
va_end(fmt);
return (result);
}
