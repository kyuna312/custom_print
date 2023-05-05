#include "main.h"

/**
 * output_revers - a function to output the reverse of a string
 *
 * @arg: variable argument value
 * @str: string delimeter
 *
 * Return: number of value printed
 */


int output_revers(const char *str, va_list arg)
{
	int i, j = 0;
	char *s = va_arg(arg, char *);

	while (*str != 'r')
		str++;

	while (s[j])
		j++;

	for (i = (j - 1); i >= 0; i--)
		my_putchar(s[i]);
	return (j);

}
