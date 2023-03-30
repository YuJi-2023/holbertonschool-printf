#include "main.h"
#include <unistd.h>
/**
 * _printchar - print out char to stdout
 *
 * Return: 1
 */
int _printchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
