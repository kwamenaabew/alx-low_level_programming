#include "main.h"

/**
 * print_binary - This function prints
 * the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, t = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		nt = n >> i;

		if (nt & 1)
		{
			_putchar('1');
			t++;
		}
		else if (t)
			_putchar('0');
	}
	if (!t)
		_putchar('0');
}
