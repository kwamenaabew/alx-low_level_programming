#include <stdio.h>
#include <stdlib.h>


/**
 * main - This program caculates the addition of two positive numbers
 * @argc: argc count
 * @argv: parameter integer
 * Return: 0 if no arguments, if symbols print Error, return 1,
 */

int main(int argc, char *argv[])
{
	int count;
	int n = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}

	for (count = 1; count < argc; count++)
	{
		if (atoi(argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			n += atoi(argv[count]);
		}
	}
	printf("%d\n", n);
	return (0);
}
