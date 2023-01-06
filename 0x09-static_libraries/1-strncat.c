#include "main.h"

/**
 * _strncat - This function concatenates two strings and return a pointer
 * to the resulting string.
 * @dest: string pointer.
 * @src: string pointer.
 * @n: number of bytes.
 * Return: string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
