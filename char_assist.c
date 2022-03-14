#include "main.h"

/**
 * print_char - prints argument of type char
 * @args: argument to print
 *
 * Return: number of characters printed
 * in this case, return value will always be 1
 */

int print_char(va_list args)
{
	char printer = va_arg(args, int);

	_putchar(printer);

	return (1);
}


/**
 * print_percent - prints percent sign
 * @args: percent sign
 *
 * Return: number of character printed
 */

int print_percent(va_list __attribute__((unused)) args)
{
	char percent = '%';

	_putchar(percent);

	return (1);
}
