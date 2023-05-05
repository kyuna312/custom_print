#include "main.h"

/**
 * print_upperS - Non printable characters
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_upperS(va_list l, flags_type *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	 /* Ignore flags*/
	(void)f;

	/* If string is == null, print "(null)" and return its length*/
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{

		/* If it's a non-printable char, print its escape sequence*/
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}

		/* Otherwise, just print the char*/
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * print_reverse - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags
 * Return: length of the printed string
 */
int print_reverse(va_list l, flags_type *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	/* Ignore flags*/
	(void)f;

	/* If string is == null, use "(null)"*/
	if (!s)
		s = "(null)";

	/* Get length of string*/

	while (s[i])
		i++;

	 /* Print the chars in reverse order*/

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * print_rot13string - prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags
 * Return: length of the printed string
 */
int print_rot13string(va_list l, flags_type *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;

	/* For each char in the string*/
	for (j = 0; s[j]; j++)
	{

		/* If it's not a letter, print it as is*/
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);

		/* else, apply the rot13 encoding*/
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_percent(va_list l, flags_type *f)
{

	/* Ignore arguments and flags*/
	(void)l;
	(void)f;
	return (_putchar('%'));
}
