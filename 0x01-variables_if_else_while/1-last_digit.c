#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;

	int ld;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	ld = n / 10;
	printf("Last digit of n is %d,", ld);

	if (ld > 5)
	{
		printf(" and is greater than 5\n");
	}

	if (ld == 0)
	{
		printf(" and is 0\n");
	}

	if (ld < 6 && ld != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);

}
