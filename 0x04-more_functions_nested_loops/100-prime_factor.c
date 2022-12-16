#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, x = 612852475143;

	for (i = 3; i < 12057; i += 2)
	{
		while (x % i == 0 && x != i)
		{
			x /= i;
		}
	}
	printf("%lu\n", x);
	return (0);
}
