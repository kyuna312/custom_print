#include "main.h"

/**
 * output_octal - output unsingned int in octal value
 *
 * @arg: variable list argument
 * @str: pointer to modifier
 *
 * Return: number of printed value
 */

int output_octal(const char *str, va_list arg)
{
	unsigned long int uint;
	int i, count, octal_len, h;
	char octal_str[20];

	h = hight(str, 'o');
	(h == 2) ? (uint = va_arg(arg, unsigned long int)) :
			(uint = va_arg(arg, unsigned int));
	if (h == 1)
		uint = (unsigned short) uint;
	i = count = octal_len = 0;
	do {
		octal_str[octal_len++] = '0' + (uint % 8);
		uint /= 8;
	} while (uint != 0);
	for (i = octal_len - 1; i >= 0; i--)
		count += my_putchar(octal_str[i]);

	return (count);
}
