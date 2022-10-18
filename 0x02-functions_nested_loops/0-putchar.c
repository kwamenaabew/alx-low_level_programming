#include "main.h"

/**
 * main - Enry point
 * This program prints out _putchar
 * Return: 0
 */

int main(void)
{
	char a[7] = "_putchar";

	for (int i = 0; i <= 7; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
