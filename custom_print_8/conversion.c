#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * desc: this is a function named "convert" which takes
 * in three parameters:
 * a positive integer named "num", an integer named "base",
 * and a boolean named "lowercase" which determines if the hexadecimal
 * values should be lowercase. It returns a string that
 * represents the result of the conversion.
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	/*
	  *set "rep" to "0123456789abcdef" if "lowercase"
	  *is true, else make it uppercase
	 */

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	/*set "ptr" to point to the end of the "buffer" array*/

	ptr = &buffer[49];

	/*set the last element of the "buffer" to '\0'*/

	*ptr = '\0';
	do {
		/*
		*move the pointer one step back and assign the character
		*corresponding to the remainder of num divided by base
		 */

		*--ptr = rep[num % base];

		/*divide the num by the base*/

		num /= base;
	} while (num != 0);

	/*return pointer*/

	return (ptr);
}
