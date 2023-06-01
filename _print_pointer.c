#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_pointer - Prints a pointer address
* @args: va_list containing the pointer address to be printed
*
* Return: Number of characters printed
*/
int _print_pointer(va_list args)
{
unsigned long int pointer = va_arg(args, unsigned long int);
int length = 0;
unsigned long int hex[100];
int i = 0;

_putchar('0');
_putchar('x');
length += 2;

if (pointer == 0)
{
_putchar('0');
length++;
}
else
{
while (pointer != 0)
{
hex[i] = pointer % 16;
pointer /= 16;
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
