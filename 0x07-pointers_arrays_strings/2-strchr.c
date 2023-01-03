#include "main.h"

/**
 * _strchr - This function locates a character in a string.
 * @s: string to be searched
 * @c: character to be searched
 * Return: Pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}
