#include "main.h"

/**
 * space - returns the index of the last space
 * @format: string to check for spqces
 * @f_i: index of 1st space
 * Return: int, index of last space
 */

int space(const char *format, int f_i)
{
	while (format[f_i] == ' ')
	{
		f_i++;
	}
	return (f_i - 1);
}
