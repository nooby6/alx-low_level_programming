#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that creates a new file or truncates an existing file
 * and writes texts to it.
 * @filename: name of file to create or truncate.
 * @text_content: NULL terminated string to write the file
 *
 * Return; (1) Success (-1) Fail and errno is set appropriately
 */

int create_file(const char *filename, char *text_content)
{
	int cont = 0;
	int file, result = -1, count = 0;/* count is for whatever is contained in file */

	if (!filename)
	return (-1);

	/* First we open the file using the open call */
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	return (-1);

	if (text_content)
	{
		for (; text_content[cont]; cont++);
		count++;

		result = write(file, text_content, count);
	
	if (result == -1)
	{
		close(file);
		return (-1);
	}
	}

	close(file);
	return (1);
}
