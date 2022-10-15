#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 *
 */

int main(void)
{
	for (char a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' and a != 'e')
		{
			putchar(a);
		}
	}

	return (0);
}
