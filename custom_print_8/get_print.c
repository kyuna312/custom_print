#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: a function named "get_print" takes in one parameter:
 * a character named "s" that holds the conversion specifier
 * passed to the "_printf" function.
 * It returns a pointer to the matching printing function that
 * corresponds to the conversion specifier.
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_type *)
{
	/*
	*an array of structs named "func_arr" which consists of
	*the conversion specifiers and their corresponding functions
	*/
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_upper},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13string},
		{'r', print_reverse},
		{'S', print_upperS},
		{'p', print_address},
		{'%', print_percent}
		};

	/*set "flags" to the length of the "func_arr" array*/
	int flags = 14;

	/* declare and register "a" as an integer variable*/
	register int a;

	/*
	*loop through the "func_arr" array to find a match between the conversion
	*specifier passed to _printf and the first element of the struct
	*/
	for (a = 0; a < flags; a++)
		if (func_arr[a].c == s)

			/*return the corresponding printing function, if a match is found*/
			return (func_arr[a].f);

	/*if not, return NULL*/
	return (NULL);
}
