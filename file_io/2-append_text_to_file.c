#include "main.h"
/**
 * append_text_to_file - Appends text to a file
 * @filename: Name of the file
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t len = text_content ? strlen(text_content) : 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
		write(file, text_content, len);

	close(file);
	return (1);
}
