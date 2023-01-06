#include <stdio.h>

/**
 * _puts - This function prints a string, followed by a new line, to stdout.
 * @str: string parameter
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
