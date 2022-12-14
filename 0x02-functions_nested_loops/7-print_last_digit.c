#include "main.h"

/*
 * print_last_digit - This function prints the last digit of a number.
 *
 * @n: Paramerter.
 *
 * Return: Last digit of @n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		return ((-1 * n) % 10);
	}
	else
	{
		return (n % 10);
	}
}
