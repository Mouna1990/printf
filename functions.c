#include "main.h"
#include <string.h>

/************************* PRINT CHAR *************************/

/**
* print_char - Prints a char
* @types: List a of arguments
* @buffer: Buffer array to handle print
* @flags:  Calculates active flags
* @width: Width
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed
*/
int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char c = va_arg(types, int);
buffer[0] = c;
return (handle_write_char(c, buffer, flags, width, precision, size));
}

/************************* PRINT A STRING *************************/
/**
* print_string - Prints a string
* @types: List a of arguments
* @buffer: Buffer array to handle print
* @flags:  Calculates active flags
* @width: get width.
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed
*/
int print_string(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char *str = va_arg(types, char *);
int length = 0;

if (str == NULL)
str = "(null)";

while (str[length] != '\0')
length++;

if (precision >= 0 && precision < length)
length = precision;

return (handle_write_char(str, buffer, flags, width, length, size));
}

/************************* PRINT PERCENT SIGN *************************/
/**
* print_percent - Prints a percent sign
* @types: Lista of arguments
* @buffer: Buffer array to handle print
* @flags:  Calculates active flags
* @width: get width.
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed
*/
int print_percent(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
UNUSED(types);
buffer[0] = '%';
return (handle_write_char('%', buffer, flags, width, precision, size));
}

/************************* PRINT INT *************************/
/**
* print_int - Print int
* @types: Lista of arguments
* @buffer: Buffer array to handle print
* @flags:  Calculates active flags
* @width: get width.
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed
*/
int print_int(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
long int n = va_arg(types, long int);
int is_negative = 0;

n = convert_size_number(n, size);

if (n < 0)
{
n = -n;
is_negative = 1;
}

Return (handle_write_int(n, buffer, flags,
width, precision, is_negative, size));
}

/************************* PRINT BINARY *************************/
/**
* print_binary - Prints an unsigned number
* @types: Lista of arguments
* @buffer: Buffer array to handle print
* @flags:  Calculates active flags
* @width: get width.
* @precision: Precision specification
* @size: Size specifier
* Return: Numbers of char printed.
*/
int print_binary(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
unsigned int n = va_arg(types, unsigned int);
return (handle_write_binary(n, buffer, flags, width, precision, size));
}
