#include "main.h"

/**
 * _memset - This function fills memory space with a constant byte
 * @s: pointer
 * @b: bytes to be filled
 * @n: number of bytes
 * Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (t);
}
