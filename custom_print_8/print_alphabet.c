#include "main.h"

/**
 * print_string - prints every character in a string
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */

int print_string(va_list l, flags_type *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	/*check and set default value for null string*/

	if (!s)
		s = "(null)";

	/* print string and return the number of characters printed*/
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_char(va_list l, flags_type *f)
{

	/* ignore flag type for char prints*/
	(void)f;
	_putchar(va_arg(l, int));

	/* print char and return 1 char*/
	return (1);
}
