#include "main.h"
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * copy_file_content - Copies content from source to destination file
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @from: source filename
 * @to: destination filename
 *
 * Return: 0 on success, exits with code 99 on failure
 */
void copy_file_content(int fd_from, int fd_to, char *from, char *to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written < 0 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
}

/**
 * close_files - Closes both file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Return: void
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, exits with various codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_file_content(fd_from, fd_to, argv[1], argv[2]);
	close_files(fd_from, fd_to);

	return (0);
}
