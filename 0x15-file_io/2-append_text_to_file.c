#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 if the function fails or filename is NULL
 * or if the file does not exist the user lacks permissions
 * and 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, n, fle = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (fle = 0; text_content[fle];)
			fle++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	n = write(p, text_content, fle);

	if (p == -1 || n == -1)
		return (-1);

	close(p);

	return (1);
}

