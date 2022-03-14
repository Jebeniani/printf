#include "main.h"

int space(const char *format, int f_i)
{
    while (format[f_i] == ' ')
    {
        f_i++;
    }
    return (f_i - 1);
}