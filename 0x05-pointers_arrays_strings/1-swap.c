#include "main.h"

/**
 * swap_int - Functions swaps the values of two integers.
 * @a: integer parameter
 * @b: integer parameter
 * Return: No values.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
