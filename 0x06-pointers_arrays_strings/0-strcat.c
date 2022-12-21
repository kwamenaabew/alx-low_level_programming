#include "main.h"

/**
 * _strcat - This function concatenates two strings.
 * @dest: string pointer parameter.
 * @src: string pointer parameter.
 * Return: string pointer.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (p);
}
