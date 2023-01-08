#include "main.h"
#include <stdio.h>

/**
 * main - This program prints out the number of arguments passed into it
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
