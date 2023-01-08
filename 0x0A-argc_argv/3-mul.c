#include "main.h"
#include <stdio.h>

/**
 * main - This program multiplies two numbers
 * if less than two numbers are inputs prints Error
 * @argc: arg count
 * @argv: arg vector array
 * Return: 1 if error .
 */

int main(int argc, int **argv)
{
	int x;
	int y;
	int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		r = x * y;
		printf("%d\n", r);
		return (0);
	}
}
