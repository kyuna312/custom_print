#include "main.h"
/**
 * output_bigSX - A helper function
 * @X: argument
 * Return: characters count
 */
int output_bigSX(char *X)
{
	unsigned int a[8];
	unsigned long int j = 1, m = 268435456, n, sum = 0;
	char diff;
	int counter;

	n = (unsigned long int)X;
	diff = 'A' - ':';
	a[0] = n / m;
	for (; j < 8; j++)
	{
		m /= 16;
		a[j] = (n / m) % 16;
	}
	for (j = 0; j < 8; j++)
	{
		sum += a[j];
		if (sum || j == 7)
		{
			if (a[j] < 10)
				my_putchar('0' + a[j]);
			else
				my_putchar('0' + diff + a[j]);
			counter++;
		}
	}
	return (counter);
}
