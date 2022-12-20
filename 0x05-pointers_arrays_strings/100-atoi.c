#include <stdio.h>

/**
 * _atoi - This function converts a string to an integer.
 * @s: string parameter.
 * Return: integer from sting.
 */

int _atoi(char *s)
{
	int n = 1;

	unsigned int l = 0;

	char g = 0;

	while (*s)
	{
		if (*s == '-')
		{
			n *= -1;
		}

		if (*s >= '0' && *s <= '9')
		{
			g = 1;
			l = l * 10 + *s - '0';
		}

		else if (g)
		{
			break;
		}

		s++;
	}

	if (n < 0)
	{
		l = -l;
	}

	return (l);

}
