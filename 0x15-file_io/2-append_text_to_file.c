#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 *  append_text_to_file - appends given text to eof
 *
 *	@filename: name of the file to append to
 *  @text_content: content to be appended
 *
 *  Return: 1 if successful, -1 otherwise
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_written = write(fd, text_content, strlen(text_content));

		if (n_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
