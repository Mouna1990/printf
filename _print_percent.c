#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
* _print_percent - Prints the '%' character
* @args: va_list (unused)
*
* Return: Always returns 1
*/
int _print_percent(va_list args __attribute__((unused)))
{
_putchar('%');
return (1);
}
