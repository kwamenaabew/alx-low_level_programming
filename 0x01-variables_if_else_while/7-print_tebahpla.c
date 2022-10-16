#include <stdio.h>

/**
 * main - Entry point
 * This program prints out alphabet
 * in reverse
 * Return: 0
 */

int main(void)
{
	char aaa;

	for (aaa = 'z'; aaa >= 'a'; aaa--)
	{
		putchar(aaa);
	}

	putchar('\n');

	return (0);
}
