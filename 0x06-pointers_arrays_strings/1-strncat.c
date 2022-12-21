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
	int src_len = 0, dest_len = 0, i;
	char *temp = dest;

	while (*dest)
	{
		dest_len++;
		dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		tesmp[dest_len + i] = src[i];
	}

	temp[dest_len + i] = '\0';

	return (temp);
}
