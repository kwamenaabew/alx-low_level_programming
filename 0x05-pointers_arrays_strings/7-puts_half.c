#include "main.h"

/**
 * puts_half - This function that prints half of a string,
 * followed by a new line.
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int length_of_the_string = 0, i, n;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string + 1) / 2;
	}

	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
