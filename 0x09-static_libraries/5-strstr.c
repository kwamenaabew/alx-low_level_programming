#include "main.h"

/**
 * _strstr - This function locates a substring
 * @haystack: string to be searched
 * @needle: substring
 * Return: Pointer to the beginning of the located substring or
 * NULL if none is found
 */

char *_strstr(char *haystack, char *needle)
{
	char *n = needle;
	char *h = haystack;

	while (*haystack)
	{
		h = haystack;
		needle = n;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack);
		}

		haystack = h + 1;
	}
	return (0);
}
