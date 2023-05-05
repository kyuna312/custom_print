#include <stdarg.h>
#include "main.h"

/**
 * output_char - displays a character
 * @arg: va_list arguments from _printf
 * @s: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int output_char(const char *s, va_list arg)
{
	/*writeout(va_arg(arg, int));*/
	const char *t = s;

	while (*t != 'c')
		t++;
	my_putchar(va_arg(arg, int));
	return (1);
}
