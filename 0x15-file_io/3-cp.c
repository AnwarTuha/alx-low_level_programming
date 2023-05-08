#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

int copy_file(const char *file_from, const char *file_to);

/**
 * main - copies the content of a file to another file
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (copy_file(argv[1], argv[2]) == -1)
	{
		exit(99);
	}

	return (0);
}

/**
 * copy_file - copies the content of a file to another file
 *
 * @file_from: file to be copied from
 * @file_to: file to copy to
 *
 * Return: 0 on success, or an error code on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (-1);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (-1);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}

	return (0);
}
