#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_octal - Prints an unsigned integer in octal format
* @args: va_list containing the unsigned integer to be printed
*
* Return: Number of characters printed
*/
int _print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int length = 0;
unsigned int octal[100];
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
octal[i] = num % 8;
num /= 8;
i++;
}

while (i > 0)
{
_putchar('0' + octal[i - 1]);
length++;
i--;
}
}

return (length);
}
