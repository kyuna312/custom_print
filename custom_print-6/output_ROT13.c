#include "main.h"

/**
 * output_ROT13 - a function that output strings in ROT13
 *
 * @arg: variable function value
 * @str: pointer to character to print
 *
 * Return: number of vallues printed if success
 */

int output_ROT13(const char *str, va_list arg)
{

	int i, count_rot, j;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *n = va_arg(arg, char *);

	count_rot = 0;
	if (!n)
	{
	return (0);
	}
	while (*str != 'R')
	str++;

	for (i = 0; n[i] != '\0'; i++)
	{
	for (j = 0; s1[j] != '\0'; j++)
	{
	if (n[i] == s1[j])
	{
	my_putchar(s2[j]);
	count_rot++;
	break;
	}
	}
	if (s1[j] == '\0')
	count_rot += my_putchar(n[i]);
	}
	return (count_rot);
}
