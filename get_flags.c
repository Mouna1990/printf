#include "main.h"

/**
* get_flags - Calculates active flags
* @format: Formatted string in which to print the arguments
* @i: take a parameter.
* Return: Flags:
*/
int get_flags(const char *format, int *i)
{
int flags = 0;
int curr_i = *i + 1;

while (format[curr_i] != '\0')
{
if (format[curr_i] == '-')
flags |= F_MINUS;
else if (format[curr_i] == '+')
flags |= F_PLUS;
else if (format[curr_i] == '0')
flags |= F_ZERO;
else if (format[curr_i] == '#')
flags |= F_HASH;
else if (format[curr_i] == ' ')
flags |= F_SPACE;
else
break;

curr_i++;
}

*i = curr_i - 1;

return (flags);
}
