#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to newley allocated space in memory,
 * which contains a copy of the string parameter
 * @str: string parameter
 * Return: pointer to memory space which contains a copy of str
 * or NULL is str is NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	char *start;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	start = str;

	while (*str)
	{
		len++;
		str++;
	}
	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
	{
		return (NULL);
	}
}
