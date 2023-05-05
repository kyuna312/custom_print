#include "main.h"
/**
 * output_integer - handle d
 * Description: integer convertion
 * @arg: arguments
 * @s: ###########
 * Return: count of digits
 */
int output_integer(const char *s, va_list arg)
{
	int a[18], h;
	long int j = 1, n, m = 100000000000000000;

	int counter = 0, sum = 0;

	h = hight(s, 'i');
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

	for (; j < 18; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 18; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 18)
		{
			my_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
