#include "main.h"

/**
 * create_file - Creates a file and writes text content into
 * @filename: Name for the file
 * @text_content: Content to write
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t len = text_content ? strlen(text_content) : 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
		write(file, text_content, len);

	close(file);
	return (1);
}
