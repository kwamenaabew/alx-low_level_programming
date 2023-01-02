#include "main.h"

/**
 * _memset - This function fills memory with constant bytes
 * @s: memory area pointed to by s
 * @b: constant byte
 * @n: first number of bytes of memory area.
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	char *t = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (t);
}
