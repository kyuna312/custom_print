#include "main.h"

/**
 * _print_integer - prints an integer to stdout
 * @n: The integer to print
 *
 * Return: On success the number of digits printed.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _print_integer(int n)
{
	unsigned int m = (n < 0) ? -n : n;
	int len = (n < 0) ? 1 : 0;

	if (n < 0)
		_putchar('-');
	if (m / 10)
		len += _print_integer(m / 10);
	len += _putchar((m % 10) + '0');

	return (len);
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - writes a string to stdout
 * @s: The string to print
 *
 * Return: On success the length of the string.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len += _putchar(s[i]);
	return (len);
}

/**
 * print_binary - prints a binary representation of an unsigned integer
 * @n: the unsigned integer to print
 *
 * Return: the number of binary digits printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n > 1)
		count += print_binary(n / 2);

	count += _putchar('0' + (n % 2));
	return (count);
}
/**
 * print_char - prints a character to stdout
 * @arg: the character to print
 *
 * Return: the number of characters printed
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
