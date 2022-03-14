#include "main.h"

/**
 * print_decimal - prints argument of type decimal.
 * @args: argument to print.
 * Return: number of characters printed.
 */

int print_decimal(va_list args)
{
	int count = 0;
	int digit, sum, last;
	int divis = 1000000000;
	int num;
	unsigned int x;

	num = va_arg(args, int);
	sum = 0;
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		count++;
	}
	x = num;
	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	while (divis > 1)
	{
		digit = (x / divis) % 10;
		sum += digit;
		if (sum != 0)
		{
			_putchar(digit + '0');
			count++;
		}
		divis = divis / 10;
	}

	last = x % 10;
	_putchar(last + '0');
	count++;

	return (count);
}

/**
 * print_integer - prints argument of type integer.
 * @args: argument to print.
 * Return: number of characters printed.
 */

int print_integer(va_list args)
{
	int count = 0;
	int digit, sum, last;
	int divis = 1000000000;
	int num;
	unsigned int x;

	num = va_arg(args, int);
	sum = 0;
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		count++;
	}
	x = num;
	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	while (divis > 1)
	{
		digit = (x / divis) % 10;
		sum += digit;
		if (sum != 0)
		{
			_putchar(digit + '0');
			count++;
		}
		divis = divis / 10;
	}
	last = x % 10;
	_putchar(last + '0');
	count++;
	return (count);
}
