#include "main.h"

/**
 * _strspn - This function gets the lenght of a prefix substring
 * @s: substring
 * @accept: string
 * Return: The number of bytes of string
 */

unsiigned int _strspn(char *s, char *accept)
{
	int t = 0; g;
	char r = accept;

	while (*s)
	{
		g = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				t++;
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
