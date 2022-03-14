#include "main.h"

/**
 * _printf - Prints a formatted string.
 * @format: String to print.
 * Return: 1ength of characters printed 
 */

int _printf(const char *format, ...)
{
	int f_i, count = 0;
	va_list args;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	if (args == NULL)
		return (-1);
	for (f_i = 0; format[f_i] != '\0'; f_i++)
	{
		if (format[f_i] == '%')
		{
			f_i++;
			if (format[f_i] == '\0')
			{
				return (-1);
			}
			while (format[f_i] == ' ')
				f_i++;
			func = get_spec_func(format[f_i]);
			if (func == NULL)
			{
				_putchar('%');
				_putchar(format[f_i]);
				count += 2;
			}
			else
				count += func(args);
		}
		else
		{
			_putchar(format[f_i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
