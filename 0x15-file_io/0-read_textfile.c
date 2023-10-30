#include <stdio.h>
#include "main.h"

/**
 * read_textfile - is the entry point
 *
 * @filename: name of file to be read
 * @letters: numbers of letters to be printed
 *
 * Return: numbers of bytes to be printed, 0 if it fails
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}
