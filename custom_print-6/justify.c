#include "main.h"

/**
 * justify - function that check for justify
 *
 * @str: pointer to string
 * @s: formert specifier
 *
 * Return: number of justify needed
 */

int justify(const char **str, char s)
{
	int len = 0;

	for (; **str != s; (*str)++)
	{
		if (**str == '.' || **str == 'l' || **str == 'h')
			return (len);
		if (**str >= '0' && **str <= '9')
			len = (len * 10) + (**str - '0');
	}
	return (len);
}
