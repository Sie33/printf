#include "main.h"
#include <stdio.h>
/**
* c_spec - prints output for the c specifier
*
* @fmt: variable list
*
* Return: return on success 1
*/
int c_spec(va_list fmt)
{
int s1 = va_arg(fmt, int);
return (_putchar(s1));
}

/**
 * s_spec - fetches a string from va_list
 * @fmt: va_list array
 *
 * Return: an int equivalent to the chars of string on success
 */
int s_spec(va_list fmt)
{
	char *s = va_arg(fmt, char *);
	int i, length;

	i = 0;
	length = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			length += _putchar(s[i]);
			i++;
		}
		return (length);
	}
	length += _putchar('(');
	length += _putchar('n');
	length += _putchar('u');
	length += _putchar('l');
	length += _putchar('l');
	length += _putchar(')');
	return (length);
}
