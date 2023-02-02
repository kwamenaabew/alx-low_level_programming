#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * to get from one number to another
 * @x: first number
 * @y: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int i, t = 0;
	unsigned long int nt;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		nt = e >> i;
		if (nt & 1)
			t++;
	}

	return (t);
}
