#include "main.h"

/**
 * print_string - prints argument of type char *
 * @args: argument to print
 * Return: number of characters printed.
 */

int print_string(va_list args)
{
	int count = 0;
	char *string = va_arg(args, char *);


	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (; string[count] != '\0'; count++)
		_putchar(string[count]);

	return (count);
}
