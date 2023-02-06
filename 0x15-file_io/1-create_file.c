#include "main.h"

/**
 * create_file - This funtion creates a file.
 * @f_name: A pointer to the name of the file to create.
 * @text: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *f_name, char *text)
{
	int f, w, l = 0;

	if (f_name == NULL)
		return (-1);

	if (text != NULL)
	{
		for (l = 0; text[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text, l);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
