#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point, This program uses write
 *to print output
 *Return: 1 Changed to 1
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
\"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
