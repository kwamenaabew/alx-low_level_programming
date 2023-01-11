#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: pointer to concat of s1 and s2 or null if str is null
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *starts1, *starts2;
	int i = 0, len1 = 0, len2 = 0;

	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = starts1;
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = starts2;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	starts1 = new_str;
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (starts1);
}
