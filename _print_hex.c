#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_hex - Prints an unsigned integer in hexadecimal format
* @args: va_list containing the unsigned integer to be printed
*
* Return: Number of characters printed
*/
int _print_hex(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int length = 0;
unsigned int hex[100];
int i = 0;

if (num == 0)
{
_putchar('0');
length++;
}
else
{
while (num != 0)
{
hex[i] = num % 16;
num /= 16;
i++;
}

while (i > 0)
{
if (hex[i - 1] < 10)
_putchar('0' + hex[i - 1]);
else
_putchar('a' + (hex[i - 1] - 10));
length++;
i--;
}
}

return (length);
}
