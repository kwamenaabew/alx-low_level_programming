#include "main.h"

/**
 * clear_bit - This function sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @x: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int x)
{
	if (x > 63)
		return (-1);

	*n = (~(1UL << x) & *n);
	return (1);
}
