#include "main.h"

/**
 * _strlen_recursion - This function  prints out lenght of a string
 * @s: input string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
