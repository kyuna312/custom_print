#include "main.h"
#include <stdlib.h>

/**
 * output_ptraddress - ====
 * @p: ===
 * @s: ====
 * Return: ===
 */
int output_ptraddress(const char *s, va_list p)
{
	int counter = 0;
	unsigned int a[16];
	unsigned int i = 0, sum = 0;
	unsigned long n, m = 1152921504606846976;
	char *str = "(nil)";

	(void)s;
	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (; str[i]; i++)
		{
			my_putchar(str[i]);
			counter++;
		}
		return (counter);
	}
	my_putchar('0');
	my_putchar('x');
	counter = 2;

	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				my_putchar('0' + a[i]);
			else
				my_putchar('0' + ('a' - ':') + a[i]);
			counter++;
		}
	}
	return (counter);
}
