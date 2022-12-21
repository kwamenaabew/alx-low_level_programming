#include "main.h"

/**
 * _strcmp - This function compares two strings.
 * @s1: string parameter
 * @s2: string parameter
 * Return: It returns an integer less than, equal to,
 * or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
