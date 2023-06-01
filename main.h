#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_pointer(va_list args);
int _print_percent(va_list args);
int _print_unknown(va_list args);

#endif /* MAIN_H */
