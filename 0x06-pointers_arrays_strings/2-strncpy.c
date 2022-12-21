#include "main.h"

/**
 * _strncpy - This function copies a string.
 * @dest: string pointer to recieve the copy
 * @src: string pointer to be copied
 * @n: number of characters of src
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
