#include <main.h>
#include <stdio.h>

/*
 *main - This functions computes the absolute value
 *of an integer.
 *
 *@n: Integer parameter.
 *
 *Return: Absolute value of n.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}

}
