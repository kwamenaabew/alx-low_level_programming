#include "main.h"

/**
 * print_rev - This function prints a string,
 * in reverse, followed by a new line.
 * @s: string parameter
 * Return: void
 */

void print_rev(char *s)
{
	char *len = s;

	while (*len)
	{
		len++;
	}
	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');

}
