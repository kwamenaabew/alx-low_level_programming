#include "main.h"

/**
 * _abs - main function
 * This functions computes the absolute value
 * of an integer.
 *
 * @n: Integer parameter.
 *
 * Return: Absolute value of n.
 */

int _abs(int n)
{
	while (n != 0)
	{
		if (n < 0)
			return (n * -1);
		if (n > 0)
			return (n);

	}
	return (0);
}
