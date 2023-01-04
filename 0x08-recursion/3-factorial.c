#include "main.h"

/**
 * factorial - This function returns the factorial of a
 * if n is lower than 0, the funtion should return -1
 * given number
 * @n: number
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
