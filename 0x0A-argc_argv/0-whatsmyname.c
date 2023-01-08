#include "main.h"
#include <stdio.h>

/**
 * main - This program prints the name of the program
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
