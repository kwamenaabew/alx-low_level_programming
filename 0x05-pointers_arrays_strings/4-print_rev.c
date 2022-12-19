#include "main.h"

/**
 * print_rev - This function prints a string,
 * in reverse, followed by a new line.
 * @s: string parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	for (i = n; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
