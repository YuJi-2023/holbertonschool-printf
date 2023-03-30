#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
 *_match_specifier - check if there is a matching specifier
 * @c: input parameter
 * Return: 0 for no matching specifier found; 1 if found
 */
int _match_specifier(char c)
{
	char s[3] = {'c', 's', '%'};
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return (1);
		}
		i = i + 1;
	}
	return (0);
}
/**
 * _printf - produce output according to a format
 * @format: pointer to first input string, including exact format
 * Return: numbers of characters printed out
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, x;
	va_list args;
	type_t format_print[] = {
		{"c", _printchar},
		{"s", _printstring},
		{"%", _printsign},
		{NULL, NULL}
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			x = 0;
			while (format_print[x].f != NULL)
			{
				if (format[i + 1] == *format_print[x].specifier)
				{
					count = count + format_print[x].f(args);
				}
				x = x + 1;
			}
			if (_match_specifier(format[i + 1]) == 1)
				i = i + 2;
			else
				return (-1);
		} else
		{
			_putchar(format[i]);
			count = count + 1;
			i = i + 1;
		}
	}
	return (count);
	va_end(args);
}
