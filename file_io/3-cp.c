#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * close_status - Closes a file descriptor
 * @fd: File descriptor
 */
void close_status(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * write_buffer - Writes buffer content to a file descriptor
 * @dest: File descriptor
 * @buffer: Buffer
 * @size: Number of bytes
 * @filename: Name of the file being written to
 */
void write_buffer(int dest, char *buffer, ssize_t size, const char *filename)
{
	if (write(dest, buffer, size) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - Copies content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, or exits with an error
 */
int main(int argc, char *argv[])
{
	int src, dest;
	char buffer[1024];
	ssize_t size;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_status(src);
		exit(99);
	}

	while ((size = read(src, buffer, sizeof(buffer))) > 0)
	{
		write_buffer(dest, buffer, size, argv[2]);
	}

	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_status(src);
		close_status(dest);
		exit(98);
	}

	close_status(src);
	close_status(dest);
	return (0);
}
