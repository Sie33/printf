#include <stdio.h>
#include <stdarg.h>
/**
* write a output to stdout from the format string FOMART
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int result = fmt_spec(format, args);
va_end(args);
return result;
}
