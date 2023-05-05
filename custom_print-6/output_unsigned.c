#include "main.h"

/**
 * output_unsignedint - a function to print integers in unsigned intnteger;
 *
 * @arg: variable list argument
 * @str: pointer to specifier
 *
 * Return: number of value printed
 */

int output_unsignedint(const char *str, va_list arg)
{
	unsigned long int uint;
	int i, count, uint_len, h;
	char uint_str[20];

	h = hight(str, 'u');
	(h == 2) ? (uint = va_arg(arg, unsigned long int)) :
			(uint = va_arg(arg, unsigned int));
	if (h == 1)
		uint = (unsigned short) uint;
	i = count = uint_len = 0;

	do {
		uint_str[uint_len++] = '0' + (uint % 10);
		uint /= 10;
	} while (uint != 0);
	for (i = uint_len - 1; i >= 0; i--)
		count += my_putchar(uint_str[i]);

	return (count);
}
