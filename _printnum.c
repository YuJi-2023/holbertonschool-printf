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
int _printnum_orderly(int i, int j)
{
	int mod_result;
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
	int num;
	int digits;

	num = va_arg(args, int);
	if (num < 0)
	{
		num = (-1) * num;
		_putchar('-');
		digits = _printnum_orderly(num, 0);
		digits = digits + 1;
	}
	else
	{
		digits = _printnum_orderly(num, 0);
	}
	return (digits);
}
