#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers
 * if less than two numbers are inputs prints Error
 * @argc: arg count
 * @argv: arg vector array
 * Return: 1 if error .
 */

int main(int argc, char *argv[])
{
	int count;
	int mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		mult *= atol(argv[count]);
	}
	printf("%d\n", mult);
	return (0);
}
