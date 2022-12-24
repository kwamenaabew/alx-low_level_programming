#include "main.h"

/**
 * print_number - printts an integer
 * @n: integer parameter.
 * Return: void
 */

void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
