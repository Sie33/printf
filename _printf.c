#include <stdio.h>
#include <stdarg.h>
/**
* write a output to stdout from the format string FOMART
 */
int _printf(const char *format, ...)
{
va_list fmt;
va_start(fmt, format);
int result = fmt_spec(format, fmt);
va_end(fmt);
return result;
}
