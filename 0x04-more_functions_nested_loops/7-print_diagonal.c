#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: Parameter
 * Return: 0
 */
int print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < i; y++)
			{
				putchar(' ');
			}
		putchar(92);
		putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
