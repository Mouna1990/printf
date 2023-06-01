#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_unsigned - Prints an unsigned integer
* @args: va_list containing the unsigned integer to be printed
*
* Return: Number of characters printed
*/
int _print_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int length = 0;
unsigned int div = 1;

while (num / div > 9)
div *= 10;

while (div != 0)
{
_putchar('0' + (num / div));
length++;
num %= div;
div /= 10;
}

return (length);
}
