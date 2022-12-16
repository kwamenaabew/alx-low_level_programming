#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: Parameter.
 * Return: 0
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
