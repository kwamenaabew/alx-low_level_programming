#include "main.h"

/**
 * _strlen - Function returns the lenght of a string
 * @s: string parameter
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);

}

/**
 * rev_string - This function prints a string,
 * in reverse, followed by a new line.
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int n = _strlen(s), i = 0;
	char c;

	while (i < n--)
	{
		c = s[i];

		s[i++] = s[n];

		s[n] = c;
	}

}
