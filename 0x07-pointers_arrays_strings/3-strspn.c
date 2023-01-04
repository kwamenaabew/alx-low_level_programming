#include "main.h"

/**
 * _strspn - This function returns the lenght of a prefix substring.
 * @s: input
 * @accept: input string
 * Return: Pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	int nt = 0;
	int ag;
	char *rt = accept;

	while (*s)
	{
		ag = 0;

		while (*accept)
		{
			if (*accept == *s)
			{
				nt++;
				ag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = rt;
		if (ag == 0)
		{
			break;
		}
	}
	return (nt);
}
