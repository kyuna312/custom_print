#include "main.h"

/**
 * print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Desc: a function named "print_address" takes in two parameters:
 * a va_list named "l" which holds the arguments passed to the
 * "_printf" function, and a pointer to a struct named "f".
 * It prints the address of the input in hexadecimal format
 * and returns the number of characters printed.
 * Return: number of char printed
 */
int print_address(va_list l, flags_type *f)
{
	/*declare a char pointer named "str"*/
	char *str;

	/*
	*retrieve the input from the va_list and
	*store it in an unsigned long int named "p"
	*/
	unsigned long int p = va_arg(l, unsigned long int);

	/*declare and register "count" as an integer variable*/
	register int count = 0;

	/*ignore the "f" parameter*/
	(void)f;


	/*if the input is equal to NULL, print "(nil)"*/
	if (!p)
		return (_puts("(nil)"));

	/*
	*convert the input into a string in hexadecimal
	*format and store it in "str"
	*/
	str = convert(p, 16, 1);

	/*
	*print "0x" followed by hexadecimal string and
	*add number of chars printed to "count"
	*/
	count += _puts("0x");
	count += _puts(str);
	/*return the total number of chars printed*/
	return (count);
}
