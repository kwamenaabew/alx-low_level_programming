#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This function prints all natural
 * numbers from n to 98, followed by a new line.
 * @n: parameter
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
}
