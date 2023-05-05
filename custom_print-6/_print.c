#include "main.h"
/**
 * is_flag - function to check for flags
 *
 * @s: string to check
 *
 * Return: true || false
 */

int is_flag(const char s)
{
	char flags[] = {'-', '#', '0', 'l', 'h', '.', '+', ' ', '\0'};
	int i;

	if (s >= '0' && s <= '9')
		return (1);
	for (i = 0; flags[i] != '\0'; i++)
		if (s == flags[i])
			return (1);
	return (0);
}


/**
 * dot_null - to check for dot nolifiers
 *
 * @s: pointer to string
 *
 * Return: 1 if true else 0
 */

int dot_null(const char *s)
{
	int i, d = 0;

	for (i = 0; is_flag(s[i]); i++)
	{
		if (s[i] == '.')
			d++;
		if (d > 1)
		if (s[i] >= '0' && s[i] <= '9')
		return (1);
	}
	return (0);
}

/**
 * cfmt - check for specifier
 * @s: format
 *
 * Return: format specifier function
 */
int (*cfmt(const char **s))(const char *, va_list)
{
	int i, len = 13;
	PrtFmt prt_fmt[] = {
				{"s", output_alpha},
				{"c", output_char},
				{"d", output_decimal},
				{"i", output_integer},
				{"R", output_ROT13},
				{"p", output_ptraddress},
				{"r", output_revers},
				{"b", output_bits},
				{"S", output_bigS},
				{"x", output_hexlower},
				{"X", output_hexupper},
				{"u", output_unsignedint},
				{"o", output_octal}
			};

	while (is_flag(**s))
		(*s)++;
	for (i = 0; i < len; i++)
		if (**s == *((prt_fmt + i)->spec))
		return ((prt_fmt + i)->selectprint);
	return (NULL);
}

/**
 * percent_handler - a finction to handle percentage.
 *
 * @s: pointer to sting pointer
 * @no_perc: number of percentage counted
 * @args: variable argument
 *
 * Return: length of printed string
 */

int percent_handler(const char **s, va_list args, int no_perc)
{
	int i, p_length = 0;
	const char *check1, *check2;
	int (*output)(const char *, va_list arg);

	check1 = check2 = *s;
	for (; *check1 == '%'; check1++)
		no_perc++;
	check2 = check1;
	(dot_null(check1)) ? (output = NULL) : (output = cfmt(&check2));
	if (output)
	{
		for (i = 0; i < (no_perc / 2); i++)
		{
			my_putchar('%');
			p_length++;
		}
		if ((no_perc % 2) == 1)
		{
			p_length += output(check1, args);
			*s = check2;
		}
		else
		*s = check1 - 1;
	}
	else
	{
		if (*check2 == '%' && (no_perc % 2) == 1)
			p_length += percent_handler(&check2, args, no_perc);
		else
		{
		for (i = 0; i < (no_perc / 2)  + (no_perc % 2); i++)
		{
			my_putchar('%');
			p_length++;
		}
			*s = check1 - 1;
		}
	}
	return (p_length);
}

/**
 * _printf - Printf function
 * @format: format.
 * Return: fomatted
 */
int _printf(const char *format, ...)
{
	const char *check;
	int p_length = 0;
	va_list args;

	check = format;
	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (*check != '\0')
	{
		if (*check == '%')
			p_length += percent_handler(&check, args, 0);
		else
		{
		p_length += my_putchar(*check);
		}
		check++;
	}
	va_end(args);
	return (p_length);
}
