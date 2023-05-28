#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: the format string
 * Return:number of bytes printed
 */
int _printf(const char *format, ...)
{
if (format == NULL)
return (-1);

va_list args;
va_start(args, format);

int printed_chars = 0;
char buffer[BUFF_SIZE];
int buff_ind = 0;

while (*format)
{
if (*format != '%')
{
buffer[buff_ind++] = *format++;
if (buff_ind == BUFF_SIZE)
{
print_buffer(buffer, &buff_ind);
}
printed_chars++;
}
else
{
format++;

switch (*format)
{
case 'c':
format++;
int c = va_arg(args, int);
buffer[buff_ind++] = c;
if (buff_ind == BUFF_SIZE)
{
print_buffer(buffer, &buff_ind);
}
printed_chars++;
break;

case 's':
format++;
char *s = va_arg(args, char *);
while (*s)
{
buffer[buff_ind++] = *s++;
if (buff_ind == BUFF_SIZE)
{
print_buffer(buffer, &buff_ind);
}
printed_chars++;
}
break;

default:
buffer[buff_ind++] = '%';
buffer[buff_ind++] = *format++;
if (buff_ind == BUFF_SIZE)
{
print_buffer(buffer, &buff_ind);
}
printed_chars += 2;
break;
}
}
}

print_buffer(buffer, &buff_ind);
va_end(args);

return (printed_chars);
}
