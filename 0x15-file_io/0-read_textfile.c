#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - the function that reads and prints a text file.
 * it also p[rints the textt file to the POSIX standard output.
 * @filename: this is the name of the file
 * @letters: the number of letters to be printed
 * Return: Number of letters || 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t _read, _write;

	char *buffer;

	if (!filename)
	{
		return (0); /* The file does not exist */
	}
	/* If it exists, continue to open file */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* Now put content into a buffer for future use */
	buffer = malloc(sizeof(char) * letters); /*use malloc to allocate memory */
	if (buffer == NULL)
		return (0);
	/* If the file can be read */
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	_write = write(POSIX, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);
}
