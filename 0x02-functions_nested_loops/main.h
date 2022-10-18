#ifndef _MAIN_H
#define _MAIN_H
#include  <stdio.h>

int _putchar(int i);
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);

	}
	putchar('\n');
}
#endif
