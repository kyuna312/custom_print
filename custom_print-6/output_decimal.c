#include "main.h"
/**
 * output_decimal - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: c/ount of digits
 */

int output_decimal(const char *s, va_list arg)
{
	int a[17], h;
	long int j = 1, n, m = 10000000000000000, sum = 0, counter = 0;

	h = hight(s, 'd');
	(h == 2) ? (n = va_arg(arg, long int)) : (n = va_arg(arg, int));
	if (h == 1)
		n = (short) n;
	if (n == 0)
		counter += my_putchar('0');
	if (n < 0)
	{
		n *= -1;
		my_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 17; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 17; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 17)
		{
			my_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
