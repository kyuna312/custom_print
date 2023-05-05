#include "main.h"

/**
 * print_int - prints an integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_int(va_list l, flags_type *f)
{

	/* retrieve integer argument from the va_list*/
	int n = va_arg(l, int);

	/* initialize result counter*/
	int res = count_digit(n);

	/* check for special flags and print */
	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;

	/* print the integer digits*/
	print_number(n);
	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_type *f)
{

	/* retrieve unsigned integer argument from the va_list*/
	unsigned int u = va_arg(l, unsigned int);

	/* then convert unsigned integer to string*/
	char *str = convert(u, 10, 0);

	/* ignore the flag pointer*/
	(void)f;

	/* print the string and return the number of char printed*/
	return (_puts(str));
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	/*check if the integer is negative and print the sign*/
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	/* divide the integer by 10 using recursion and print the digits*/
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	/* convert the negative integer to positive integer*/
	if (i < 0)
		u = i * -1;
	else
		u = i;

	/* count the number of digits in the integer*/
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
