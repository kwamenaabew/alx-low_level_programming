#include "main.h"

/**
 * print_sign - main function
 *
 * @n: parameter
 * Return: 0
 */

int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		retval = 1;
	}
	else if (n == 0)
	{
		retval = 0;
	}
	else
	{
		retval = -1;
	}

	return (retval);
}
