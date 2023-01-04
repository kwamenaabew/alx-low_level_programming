#include "main.h"

/**
 * _strspn - This function returns the lenght of a prefix substring.
 * @s: input
 * @accept: input string
 * Return: Pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsinged int n = 0;

	while (*s)
	{
		for (int i = 0; accept[i]; i++)
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
