#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: read text file
 * @letters: number of letters
 * Return: n the actual number of bytes read and printed
 * and 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fil;
	ssize_t lt;
	ssize_t n;
	ssize_t tr;

	lt = open(filename, O_RDONLY);
	if (lt == -1)
		return (0);
	fil = malloc(sizeof(char) * letters);
	tr = read(lt, fil, letters);
	n = write(STDOUT_FILENO, fil, tr);

	free(fil);
	close(lt);
	return (n);
}
