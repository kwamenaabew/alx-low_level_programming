#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @s: input string
 * @c: input charater
 * Return: Pointer to position of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		return (0);
}
