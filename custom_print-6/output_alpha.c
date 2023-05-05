#include "main.h"

/**
 * output_alpha - a function to print out the character and count the numbers,
 * of printable characters
 *
 * @arg: variable value argument
 * @s: pointer to the formart specifier
 *
 * Return: numbers of printed characters || -1
 */

int output_alpha(const char *s, va_list arg)
{
	char *str = va_arg(arg, char *);
	int count_alpha;

	(void)s;
	count_alpha = 0;
	if (!str)
	str = "(null)";

	/*while (*t != 's')*/
		/*t++;*/

	while (*str)
	{
	/*if (*str >= 0 && *str < 127)*/
	/*if (isprint(*str))*/
	/*count_alpha += my_putchar(*str);*/
	/*else*/
	count_alpha += my_puts(*str);
	str++;
	}
	return (count_alpha);
}
