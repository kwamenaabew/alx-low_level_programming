#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory
 * @src: memory of source
 * @n: number of bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *t = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (t);
}
