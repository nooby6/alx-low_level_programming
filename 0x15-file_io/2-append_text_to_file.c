#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - funtion that appends a text at the end of a file.
 * @filename: name of file appended to
 * @text_content: NULL teminated string to add at the end of the file
 *
 * Return: 1 (success) -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!filename)
		return (-1);

	/* open file to recieive string in append mode. use O.S.C */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		close(fd);
		return (1);
		
		/* now write text to file */
		_write = write(fd, text_content, strlen(text_content));
		
			if (_write == -1 || _write != (int)strlen(text_content))
			{
				close(fd);
				return (-1);
			}
	}
	close(fd);
	return (1);
}
