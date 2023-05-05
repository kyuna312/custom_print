#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_type *);
	const char *p;
	va_list arguments;
	flags_type flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}

			/* look for flags*/
			while (get_flag(*p, &flags))
				p++;
			/* find the corresponding print function*/
			pfunc = get_print(*p);
			/*call the print function*/
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);/* handle the invalid specifiers*/
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	/* add a null terminator*/
	va_end(arguments);
	return (count);
}
