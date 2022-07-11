#include "main.h"

/**
 * percent_parser - Controller for percent format
 * @format: The parsering format
 * @ap: List of arguments
 * @i: Iterator
 * Return: The number of characters printed
 **/
int percent_parser(const char *format, va_list ap, int *i)
{
        int len, j;

        t_format formats[] = {
                {'c', is_char}, {'s', is_string},
                /*{'d', is_integer}, {'i', is_integer},*/
                {'\0', NULL}
        };

        *i = *i + 1;

        if (format[*i] == '\0')
                return (-1);

        if (format[*i] == '%')
        {
                putchar('%');
                return (1);
        }

        for (len = j = 0; formats[j].specifier; j++)
        {
                if (format[*i] == formats[j].specifier)
                {
                        len = formats[j].f(ap);
                        return (len);
                }

        }

        putchar('%');
        putchar(format[*i]);

        return (2);
}
