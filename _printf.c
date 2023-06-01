#include <unistd.h>
#include <stdarg.h>
#include "main.h"

int _putchar(char c);

/**
* _printf - Custom implementation of printf function
* @format: Format string
*
* Return: Number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
int length = 0;
int i = 0;
va_list args;

va_start(args, format);

while (format && format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1);
if (format[i] == '%')
{
_putchar('%');
length++;
}
else if (format[i] == 'c')
length += _print_char(args);
else if (format[i] == 's')
length += _print_string(args);
else if (format[i] == 'd' || format[i] == 'i')
length += _print_int(args);
else if (format[i] == 'u')
length += _print_unsigned(args);
else if (format[i] == 'o')
length += _print_octal(args);
else if (format[i] == 'x' || format[i] == 'X')
length += _print_hex(args);
else if (format[i] == 'p')
length += _print_pointer(args);
else if (format[i] == '%')
{
_putchar('%');
length++;
}
else
{
_putchar('%');
_putchar(format[i]);
length += 2;
}
}
else
{
_putchar(format[i]);
length++;
}
i++;
}

va_end(args);

return (length);
}
