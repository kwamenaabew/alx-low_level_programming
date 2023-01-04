#include "main.h"

/**
 * _strpbrk - This function searches a string for any set of bytes
 * @s: input string
 * @accept: preexisting string
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept or NULL is none is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *rt = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = rt;
		s++;
	}
	return (0);
}
