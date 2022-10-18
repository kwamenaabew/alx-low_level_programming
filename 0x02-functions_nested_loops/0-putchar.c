#include "main.h"

/**
 * main - Enry point
 * This program prints out _putchar
 * Return: 0
 */

int main(void)
{
	char a[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
