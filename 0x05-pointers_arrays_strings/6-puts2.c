#include "main.h"

/**
 * puts2 - This function prints every other character of
 * a string, starting with the first character,
 * followed by a new line.
 * @str: string parameter.
 * Return: void
 */


void puts2(char *str)
{
	int n = 0, i;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = 0; i <= n - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
