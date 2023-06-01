#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_char - Prints a single character
* @args: va_list containing the character to be printed
*
* Return: Number of characters printed
*/
int _print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
