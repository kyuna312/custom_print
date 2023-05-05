#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _puts(char *s);
int _print_integer(int n);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_integer(va_list arg);
int print_percent(void);
int print_binary(unsigned int n);
int handle_directive(char specifier, va_list arg);

#endif
