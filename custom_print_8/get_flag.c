#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag
 * @f: pointer to the struct flags
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_type *f)
{
	/* initiallizing the flag to 0*/
	int a = 0;

	switch (s)/*checking which flag is found in the format string*/
	{
		/*if '+'flag is found*/
		case '+':
			f->plus = 1;/*turn it on in the struct*/
			a = 1;/*then set it to 1*/
			break;

			/*if ' ' flag is found*/
		case ' ':
			f->space = 1;/*turn on 'space' in the struct*/
			a = 1;/*then set it to 1*/
			break;
			/*if '#' is found*/
		case '#':
			f->hash = 1;/* turn on '#' in struct*/
			a = 1;/* set it to 1 */
			break;
	}

	return (a);/* return the flag values */
}
