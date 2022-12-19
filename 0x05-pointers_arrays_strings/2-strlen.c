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
