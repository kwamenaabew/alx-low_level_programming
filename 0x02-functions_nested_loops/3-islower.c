#include "main.h"

/**
 * _islower - main function
 * This program  returns 0 if parameter is not lovwer
 * case and 1 if otherwise
 *
 * @c: parameter
 *
 * Return: 0
 */


int _islower(int c)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
		else
			return (0);
	}
}
