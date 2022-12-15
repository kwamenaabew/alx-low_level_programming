#include <main.h>

/**
 * _isupper - checks for uppercase character
 * @c: Parameter to be checked
 * Return: 0
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}_putchar('\n');
