#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_int - Prints an integer
* @args: va_list containing the integer to be printed
*
* Return: Number of characters printed
*/
int _print_int(va_list args)
{
int num = va_arg(args, int);
int length = 0;
int div = 1;

if (num < 0)
{
_putchar('-');
length++;
num = -num;
}

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
