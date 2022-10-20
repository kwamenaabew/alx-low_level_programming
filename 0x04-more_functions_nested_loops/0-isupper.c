#include "main.h"

/**
 * _isupper - main function
 * This program returns 1 if
 * @c: is uppercase or 0 if otherwise
 * Return: 0
 */

int _isupper(int c)
{
	char x;
	int v = 0;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (c == x)
		{
			v = 1;
		}
	}
	_putchar('\n');

	return (v);
}
