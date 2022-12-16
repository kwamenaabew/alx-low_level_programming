#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: Parameter
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
