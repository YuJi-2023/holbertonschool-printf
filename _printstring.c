#include "main.h"
#include <stddef.h>
/*
 * _printstring - print out strings
 * Return: length of the string
 *
 */
int _printstring(va_list args)
{
	char *s;
	int j;

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
	return (j);
}
