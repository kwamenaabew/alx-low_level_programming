#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}

	return (0);
}
