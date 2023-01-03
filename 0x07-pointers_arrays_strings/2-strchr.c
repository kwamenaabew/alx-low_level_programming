#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @s: input string
 * @c: input charater
 * Return: Pointer to position of c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
			s++;
		}
		if (c == *s)
		{
			return (s);
		}
	}
	return (NULL);
}
