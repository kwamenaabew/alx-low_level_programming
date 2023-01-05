#include "main.h"

int str_len(char *s);
int pallindrome(char *s, int l);

/**
 * str_len - This function returns the lenght of a string
 * @s: input string
 * Return: lenght of input string
 */

int str_len(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (str_len(s + 1) + 1);
}

/**
 * is_palindrome - This function returns 1 if the input string is a
 * palindrome or 0 if otherwise
 * @s: input string
 * Return: 1 if string is a palindrome or 0 if otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = str_len(s);
	if (l <= 1)
	{
		return (1);
	}
	return (pallindrome(s, l));
}
