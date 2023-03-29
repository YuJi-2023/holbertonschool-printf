#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - produce output according to a format
 * @format: pointer to first input string, including exact format
 * Return: numbers of characters printed out
 */
int _printf(const char *format, ...)
{
	int count;
	int i;
	int j;
	va_list args;
	int c;
	char *s;

	i = 0;
	count = 0;
	va_start(args, format);
	if (format == NULL || *format == '%')
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					count = count + 1;
					break;
				case 's':
					j = 0;
					s = va_arg(args, char *);
					if (s == NULL)
					{
						s = "(null)";
					}
					while (s[j] != '\0')
					{
						_putchar(s[j]);
						j = j + 1;
					}
					count = count + strlen(s);
					break;
				case '%':
					_putchar('%');
					count = count + 1;
					break;
				default:
					_putchar('%');
					_putchar(format[i + 1]);
					count = count + 2;
			}
			i = i + 2;
		} else
		{
			_putchar(format[i]);
			i = i + 1;
			count = count + 1;
		}
	}
	return (count);
	va_end(args);
}
