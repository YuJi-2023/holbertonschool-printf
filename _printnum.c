#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _printnum_orderly - print the input number of
 * type integers into string but in digits order
 * @i: the input number
 * @j: current count of digits printed
 * Return: the number of digits printed
 */
int _printnum_orderly(long int i, int j)
{
	long int mod_result;
	int digit_printed;

	if (i == 0)
	{
		return (j);
	}
	mod_result = i % 10;
	i = i / 10;
	digit_printed = _printnum_orderly(i, j);
	_putchar('0' + mod_result);
	return (digit_printed + 1);
}
/**
 * _printnum - print out input numbers/integers
 * @args: input parameter
 * Return: digits of the number
 */
int _printnum(va_list args)
{
	long int num;
	int digits;

	num = va_arg(args, int);
	if (num > 0)
	{
		digits = _printnum_orderly(num, 0);
	}
	else if (num == 0)
	{
		_putchar('0');
		digits = 1;
	}
	else
	{
		_putchar('-');
		num = -1 * num;
                digits = _printnum_orderly(num, 0);
                digits = digits + 1;
	}
	return (digits);
}
