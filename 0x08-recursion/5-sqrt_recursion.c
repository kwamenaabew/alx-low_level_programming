#include "main.h"
int _sqrt(int p, int t);

/**
 * _sqrt_recursion - Returns the square root of a number
 * If n does not have a natural square root, the function should return -1
 * @n: Number to be squared
 * Return: Square of a  number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}

/**
 * _sqrt - Returns the square root
 * @p: previous value
 * @t: square root
 * Return: square root
 */

int _sqrt(int p, int t)
{
	if (p > t)
	{
		return (-1);
	}
	else if (p * p == t)
	{
		return (p);
	}
	return (_sqrt(p + 1, t));
}
