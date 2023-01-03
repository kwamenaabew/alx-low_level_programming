#include "main.h"

/**
 * _strspn - This function gets the lenght of a prefix substring
 * @s: substring
 * @accept: string
 * Return: number of bytes of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (r = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
