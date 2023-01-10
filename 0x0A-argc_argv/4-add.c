#include <stdio.h>
#include <stdlib>
#include <ctype>

/**
 * main - This program caculates the addition of two positive numbers
 * @argc: argc count
 * @argv: parameter integer
 * Return: 0 if no arguments, if symbols print Error, return 1,
 */

int main(int argc, char **argv)
{
	int num;
	int result = 0;
	int i;

	while (argc-- < 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc[i]])))
			{
				printf("Error\n");
				return (0);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
