#include "main.h"

/**
 * is_string - Print string
 * @ap: list.
 * Return: String length.
 */

int is_string(va_list ap)
{
	char *str = NULL;
	int count = 0;

	str = va_arg(ap, char*);
	if (!str)
		str = "(null)";

	for ( ; str[count] != '\0'; count++)
		putchar(str[count]);

	return (count);
}
