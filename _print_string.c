#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_string - Prints a string
* @args: va_list containing the string to be printed
*
* Return: Number of characters printed
*/
int _print_string(va_list args)
{
char *str = va_arg(args, char *);
int length = 0;

if (str == NULL)
str = "(null)";

while (str[length] != '\0')
{
_putchar(str[length]);
length++;
}

return (length);
}
