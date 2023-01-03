#include "main.h"

/**
 * _strspn - This function returns the lenght of a prefix substring.
 * @s: input
 * @accept: input string
 * Return: Pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	int t = 0, g;
	char *r = accept;

	while (*s)
	{
		g = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				g = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = r;
		if (g == 0)
		{
			break;
		}
	}
	return (t);
}
