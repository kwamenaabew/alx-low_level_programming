#include "main.h"

/**
 * print_chessboard - This function prints a chess board
 * @a: array input
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
