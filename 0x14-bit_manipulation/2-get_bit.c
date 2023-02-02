#include "main.h"

/**
 * get_bit -This function returns the value of
 * a bit at an index in a decimal number
 * @n: number to search
 * @x: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int x)
{
	int l;

	if (x > 63)
		return (-1);

	l = (n >> x) & 1;

	return (l);
}
