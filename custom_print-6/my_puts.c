#include <unistd.h>

/**
 * my_puts - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int my_puts(char c)
{

	write(1, &c, 1);
/*	return (1);*/
	return (1);
}
