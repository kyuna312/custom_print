#include "main.h"

/**
 * output_hexlower - a function that output exadecimal, in lowercase
 *
 * @arg: variable list argument
 * @str: pointer to delemeter
 *
 * Return: number of printed value
 */

int output_hexlower(const char *str, va_list arg)
{
	unsigned long int uint;
	int i, count, hex_len, digit, h;
	char hex_str[20];

	h = hight(str, 'x');
	(h == 2) ? (uint = va_arg(arg, unsigned long int)) :
			(uint = va_arg(arg, unsigned int));
	if (h == 1)
		uint = (unsigned short) uint;
	i = count = hex_len = 0;
	do {
		digit = uint % 16;
		if (digit < 10)
		hex_str[hex_len++] = digit + '0';
		else
		hex_str[hex_len++] = 'a' + digit - 10;
		uint /= 16;
	} while (uint != 0);
	for (i = hex_len - 1; i >= 0; i--)
		count += my_putchar(hex_str[i]);
	return (count);
}
