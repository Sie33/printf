#include "main.h"
#include <stdio.h>
/**
* c_spec - prints output for the c specifier
*
* @fmt: variable list
*
* Return : return on success 1
*/
int c_spec(va_list fmt)
{
int s1 = va_arg(fmt, int);
return (_putchar(s1));
}
