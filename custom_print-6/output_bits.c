#include "main.h"

/**
 * output_bits - function to convert unsigned int to binary
 *
 * @arg: variable va_list argument
 * @str: pointer to delimeter
 *
 * Return: number of values printed
 */

int output_bits(const char *str, va_list arg)
{
	unsigned int uint;
	int i = 0, count = 0, binary_len = 0;
	char binary_str[50];

	uint = va_arg(arg, unsigned int);

	while (*str != 'b')
		str++;
	do {
	binary_str[binary_len++] = '0' + (uint % 2);
	uint /= 2;
	} while (uint != 0);
	for (i = binary_len - 1; i >= 0; i--)
		count += my_putchar(binary_str[i]);
	return (count);
}
