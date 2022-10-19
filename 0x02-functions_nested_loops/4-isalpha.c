#include "main.h"

/**
 * _isalpha - main function
 * This program returns 1 if parameter is alpha
 * or 0 if otherwise
 * @c: parameter
 * Return: 0
 */

int _isalpha(int c)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = 'A'; y <= 'Z'; y++)
		{
			if (c == x || C == y)
			{
				return (1);
			}
		}

	}
	return (0);
}
