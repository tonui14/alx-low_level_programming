#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of file
 * @text_content: text content to add
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t nwritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	nwritten = fwrite(text_content, 1, strlen(text_content), file);

	fclose(file);

	if (nwritten != strlen(text_content))
		return (-1);

	return (1);
}
