#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_handler - Print error message and exit with the specified exit code.
 * @exit_code: The exit code to use.
 * @format: The format string for the error message.
 * @...: Optional arguments for the format string.
 */
void error_handler(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_handler(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler(99, "Error: Can't write to file %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_handler(99, "Error: Can't write to file %s\n", argv[2]);

		if (bytes_written != bytes_read)
			error_handler(99, "Error: Incomplete write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_handler(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_handler(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_handler(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
