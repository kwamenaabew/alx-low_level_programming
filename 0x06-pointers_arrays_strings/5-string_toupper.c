#include "main.h"

/**
 * string_toupper - This function changes all lowercase
 * of a string to uppercase
 * @s: string
 * Return: string
 */

char *string_toupper(char *s)
{
	char *t = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (t);
}
