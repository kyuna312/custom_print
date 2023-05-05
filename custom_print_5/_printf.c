#include "main.h"

/**
 * print_string - prints a string to stdout
 * @arg: the string to print
 *
 * Return: the number of characters printed
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (_puts("(null)"));
	else
		return (_puts(s));
}
/**
 * handle_directive - handles a single format specifier
 * @specifier: the format specifier character
 * @arg: the va_list of arguments
 *
 * Return: the number of characters printed
 */
int handle_directive(char specifier, va_list arg)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(arg));
		case 's':
			return (print_string(arg));
		case 'd':
		case 'i':
			return (print_integer(arg));
		case 'b':
			return (print_binary(va_arg(arg, unsigned int)));
		case '%':
			return (print_percent());
		default:
			_putchar('%');
			_putchar(specifier);
			return (2);
	}
}
/**
 * print_integer - prints an integer to stdout
 * @arg: The integer to print
 *
 * Return: the number of digits printed
 */
int print_integer(va_list arg)
{
	return (_print_integer(va_arg(arg, int)));
}

/**
 * print_percent - prints a percent sign to stdout
 *
 * Return: the number of characters printed
 */
int print_percent(void)
{
	return (_putchar('%'));
}

/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, len = 0;
	va_list arg;

	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;

			if (format[i] == '\0')
				return (-1);

			len += handle_directive(format[i], arg);
		}
		else
			len += _putchar(format[i]);
	}

	va_end(arg);
	return (len);
}
