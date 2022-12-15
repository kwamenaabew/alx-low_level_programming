#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	char n = '0';
	int x = 0;

	for (; n <= '9'; i++)
	{
		if (n == c)
		{
			x = 1;
			break;
		}
	}

	return (x);
}
