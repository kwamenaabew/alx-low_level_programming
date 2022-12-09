#include <stdio.h>

/**
 * main - Entry point
 * This program prints all possible combinations
 * of two digits
 * Return: 0
 */

int main(void)
{
	int i,j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i+1; i <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
