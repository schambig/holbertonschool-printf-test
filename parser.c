#include "main.h"

/**
 * parser - Format controller
 * @format: String format
 * @ap: List of arguments
 * Return: Total length of arguments with the total length of the base string
 **/
int parser(const char *format, va_list ap)
{
        int len, i, aux;

        len = 0;
        for (i = 0; format[i] != 0; i++)
        {
                if (format[i] == '%')
                {
                        aux = percent_parser(format, ap, &i);
                        if (aux == -1)
                                return (-1);

                        len += aux;
                        continue;
                }

                putchar(format[i]);
                len = len + 1;
        }

        return (len);
}
