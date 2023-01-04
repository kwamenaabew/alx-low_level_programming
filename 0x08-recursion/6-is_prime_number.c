#include "main.h"
int is_div(int n, int d);

/**
 * is_prime_number - This function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: number to be checked if prime
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_div(n, d));
}

/**
 * is_div - This function  checks if a number is divisible
 * @n: input to be checked
 * @d: result
 * Return: 1 if divisible otherwise 0
 */

int is_div(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	if (d == n / 2)
	{
		return (1);
	}
	return (is_div(n, d + 1));
}
