#include "main.h"

/**
 * is_char - print char.
 * @ap: va_list.
 * Return: The number of characters printed
 */
int is_char(va_list ap)
{
        int aux;

        aux = va_arg(ap, int);

        putchar(aux);

        return (1);
}
