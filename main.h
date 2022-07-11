#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

/**
 * struct s_format - Typedef struct
 * @specifier: Format
 * @f: The function associated
 **/
typedef struct s_format
{
	char specifier;
	int (*f)(va_list);
} t_format;

/* _printf */
int _printf(const char *, ...);

/* parsers */
int parser(const char *, va_list);
int percent_parser(const char *, va_list, int *);

/* print_functions */
int is_char(va_list);
int is_string(va_list);
int is_integer(va_list);

#endif
