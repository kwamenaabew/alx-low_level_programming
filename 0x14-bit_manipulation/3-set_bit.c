#include "main.h"

/**
 * set_bit -This function sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @x: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int x)
{
	if (x > 63)
		return (-1);

	*n = ((1UL << x) | *n);
	return (1);
}
