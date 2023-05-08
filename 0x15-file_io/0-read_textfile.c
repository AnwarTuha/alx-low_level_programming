#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  read_textfile - reads a text file and prints
 *                  it to the POSIX standard output:
 *
 *	@filename: name of the file to read
 *  @letters: actual letters it should read
 *
 *  Return: number of letters read
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);

	if (n_read == -1)
		return (0);

	n_written = write(STDOUT_FILENO, buffer, n_read);

	if (n_written == -1 || n_written != n_read)
		return (0);

	close(fd);
	free(buffer);

	return (n_written);
}
