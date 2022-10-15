#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	char aaa;

	for (aaa = 'a'; aaa <= 'z'; aaa++)
	{
		putchar(aaa);
	}

	for (aaa = 'A'; aaa <= 'Z'; aaa++)
	{
		putchar(aaa);
	}

	putchar('\n');

	return (0);
}
