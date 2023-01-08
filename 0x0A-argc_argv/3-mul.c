#include "main.h"
#include <stdio.h>

/**
 * main - This program multiplies two numbers
 * if less than two numbers are inputs prints Error
 * @argc: arg count
 * @argv: arg vector array
 * Return: 1 if error .
 */

int main(int argc, *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d", _atoi(argv[1]) * _atoi(argv[2]));
		return (0);
	}
}
