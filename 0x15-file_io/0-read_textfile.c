#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function reads text file print to STDOUT.
 * @f_name: text file being read
 * @s: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *f_name, size_t s)
{
	char *b;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(f_name, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	b = malloc(sizeof(char) * s);
	t = read(f, b, s);
	w = write(STDOUT_FILENO, b, t);
	free(b);
	close(f);
	return (w);
}
