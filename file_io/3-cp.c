#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_exit - Handles error and exits with the corresponding code
 * @code: Exit code
 * @message: Error message
 * @fd1: First file descriptor to close
 * @fd2: Second file descriptor to close
 */
void error_exit(int code, const char *message, int fd1, int fd2)
{
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
 * main - Copies the content of a file to another
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t lenRd, lenWr;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", -1, -1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file\n", -1, -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file\n", fd_from, -1);

	while ((lenRd = read(fd_from, buffer, 1024)) > 0)
	{
		lenWr = write(fd_to, buffer, lenRd);
		if (lenWr != lenRd)
			error_exit(99, "Error: Can't write to file\n", fd_from, fd_to);
	}
	if (lenRd == -1)
		error_exit(98, "Error: Can't read from file\n", fd_from, fd_to);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd\n", fd_from, fd_to);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd\n", fd_from, fd_to);

	return (0);
}
