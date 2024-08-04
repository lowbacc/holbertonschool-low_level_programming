#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * @filename: Name of file
 * @letters: Number of letters
 * Return: Number of letters read and printed, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rlen, wlen;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	rlen = read(file, buffer, letters);
	wlen = write(STDOUT_FILENO, buffer, rlen);

	free(buffer);
	close(file);

	return (rlen == wlen ? wlen : 0);
}
