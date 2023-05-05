#include "main.h"
/**
 * count_array - count value in array array exempt,
 * leading zeros
 *
 * @arr: pointer array
 * @len: array length
 *
 * Return: number of elemnt counted
 */

int count_array(int *arr, int len)
{
	int i, count = 0, sum = 0;

	for (i = 0; i < len; i++)
	{
	sum += arr[i];
	if (sum != 0 || i == len)
		count++;
	}
	return (count);
}

/**
 * print_array_val - print out value in array array exempt,
 * leading zeros
 *
 * @arr: pointer array
 * @len: array length
 *
 * Return: number of elemnt printed
 */

int print_array_val(int *arr, int len)
{
	int i, count = 0, sum = 0;

	for (i = 0; i < len; i++)
	{
	sum += arr[i];
	if (sum != 0 || i == len)
	count += my_putchar('0' + arr[i]);
	}
	return (count);
}

/**
 * print_array_all - print out value in array array including,
 * leading zeros
 *
 * @arr: pointer array
 * @len: array length
 *
 * Return: number of elemnt printed
 */

int print_array_all(int *arr, int len)
{
	int i, count = 0, sum = 0;

	for (i = 0; i < len; i++)
	{
	sum += arr[i];
	if (sum || i == len)
	count += my_putchar('0' + arr[i]);
	}
	return (count);
}

/**
 * print_recus - prints a value repetedly
 *
 * @len: number of time to print the value
 * @value: value to print
 *
 * Return: number of value printed
 */

int print_recus(int len, char value)
{
	int i = 0;

	if (len <= 0)
	return (0);

	for (; i < len; i++)
	my_putchar(value);
	return (i);
}
