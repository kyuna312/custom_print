#include "main.h"

/**
 * print_hex - prints a number in hexadecimal base,
 * in lowercase
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Return: the number of char printed
 */
int print_hex(va_list l, flags_type *f)
{

	/* Get argument as an unsigned int*/
	unsigned int num = va_arg(l, unsigned int);

	 /* Convert the number to a string in hexadecimal format*/
	char *str = convert(num, 16, 1);
	int count = 0;

	/* If the 'hash' flag is enabled and the number is not zero, add "0x"*/

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");

	 /* Print the hexadecimal number*/
	count += _puts(str);

	/*the number of char printed is returned*/
	return (count);
}

/**
 * print_hex_upper - prints a number in hexadecimal base,
 * in uppercase
 * @l: va_list arguments from _printf
 * @f: pointer to the struct
 * Return: the number of char printed
 */
int print_hex_upper(va_list l, flags_type *f)
{

	/* Get argument as an unsigned int*/
	unsigned int num = va_arg(l, unsigned int);

	/* Convert the number to a string in hexadecimal format (uppercase)*/
	char *str = convert(num, 16, 0);
	int count = 0;

	/* If the 'hash' flag is enabled and the number is not zero, add "0X"*/
	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");

	/* Print the hexadecimal number (uppercase)*/
	count += _puts(str);

	/* Return the number of char printed*/
	return (count);
}

/**
 * print_binary - prints a number in base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struct
 * Return: the number of char printed
 */
int print_binary(va_list l, flags_type *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;/*ignore unused flag variableand print*/
	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @l: va_list arguments from _printf
 * @f: pointer to the struct
 * Return: the number of char printed
 */
int print_octal(va_list l, flags_type *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	/* check for octal prefix 'O'*/
	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');

	/* Print the octal number*/
	count += _puts(str);
	return (count);
}
