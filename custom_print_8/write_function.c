#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1,On error, -1 is returned
 */
int _putchar(char c)
{
	/*declare a buffer array of size 1024*/
	static char buffer[1024];

	/*initialize static variable a to 0*/
	static int a;

	/* if c is -1 or a >= 1024*/
	if (c == -1 || a >= 1024)
	{
		/* write the contents of buffer to stdout*/
		write(1, &buffer, a);

		/*reset the value of a to 0*/
		a = 0;
	}
	 /* if c is not -1*/
	if (c != -1)
	{

		/* store the value of c in buffer*/
		buffer[a] = c;
		a++;
	}

	 /* return 1 on success*/
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	 /*declare a register variable w*/
	register int w;

	 /* iterate over the string*/
	for (w = 0; str[w] != '\0'; w++)

		/*print each char using _putchar*/
		_putchar(str[w]);

	/*return the number of chars written*/
	return (w);
}
