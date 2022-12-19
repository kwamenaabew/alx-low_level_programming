#include "main.h"

int _strlen(char *s);
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

	for (i = 0; i <= n; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

/**
 * _strlen - function prints out the length of string
 * @s: string parameter
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\n')
	{
		n++;
	}

	return (n);
}
