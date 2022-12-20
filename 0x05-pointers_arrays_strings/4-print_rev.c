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
 * print_rev - This function prints a string,
 * in reverse, followed by a new line.
 * @s: string parameter
 * Return: void
 */

void print_rev(char *s)
{
	int n = _strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
