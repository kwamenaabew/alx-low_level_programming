#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @f_name: A pointer to the name of the file.
 * @text: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *f_name, char *text)
{
	int o, w, l = 0;

	if (f_name == NULL)
		return (-1);

	if (text != NULL)
	{
		for (l = 0; text[l];)
			l++;
	}

	o = open(f_name, O_WRONLY | O_APPEND);
	w = write(o, text, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
