#include "main.h"

/**
 * print_alphabet - Prints out
 * the alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('n');

	return (0);
}
