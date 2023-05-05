#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 *
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_type;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_type *f);
} ph;

/* print_integers */
int print_int(va_list l, flags_type *f);
void print_number(int n);
int print_unsigned(va_list l, flags_type *f);
int count_digit(int i);

/* print_basenum */
int print_hex(va_list l, flags_type *f);
int print_hex_upper(va_list l, flags_type *f);
int print_binary(va_list l, flags_type *f);
int print_octal(va_list l, flags_type *f);

/* conversion */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_type *);

/* get_flag */
int get_flag(char s, flags_type *f);

/* print_alphabet */
int print_string(va_list l, flags_type *f);
int print_char(va_list l, flags_type *f);

/* write_function */
int _putchar(char c);
int _puts(char *str);

/* print_unique */
int print_rot13string(va_list l, flags_type *f);
int print_reverse(va_list l, flags_type *f);
int print_upperS(va_list l, flags_type *f);

/* print_add */
int print_address(va_list l, flags_type *f);

/* print_percent */
int print_percent(va_list l, flags_type *f);

#endif
