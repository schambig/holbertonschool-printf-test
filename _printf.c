#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	unsigned int len;
	va_list ap;

	if (!format)
		return (-1);

	len = strlen(format);
	if (len <= 0)
		return (0);

	va_start(ap, format);
	len = parser(format, ap);
	va_end(ap);

	return (len);
}
