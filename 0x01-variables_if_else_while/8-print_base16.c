#include <stdio.h>

/**
 * main -entry point
 * This program prints out
 * all numbers in bas 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char i;

	char j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);

}
