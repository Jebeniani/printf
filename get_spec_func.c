#include "main.h"

/**
 * get_spec_func - identifiers correct print function using specifier character
 * @spec: specifier character
 * Return: function.
 */

int (*get_spec_func(char spec))(va_list)
{
	int i;

	spec_t type[] = {
		{"c", print_char},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_decimal},
		{"s", print_string},
		{NULL, NULL},
	};

	for (i = 0; type[i].sym != NULL; i++)
	{
		if (spec == *type[i].sym)
			return (type[i].f);
	}

	return (NULL);
}
