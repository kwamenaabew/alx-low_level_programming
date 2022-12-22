#include "main.h"

/**
 * leet - This function that encodes a string into 1337.
 * @s: sting parameter
 * Return: encoded string.
 */

char *leet(char *s)
{
	int a, b;

	char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[a])
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == letters[b])
			{
				s[a] = numbers[b];
			}
		}
		a++;
	}
	return (s);
}
