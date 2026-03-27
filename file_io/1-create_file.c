#include "main.h"

/**
 * create_file - creates a file with given content
 * @filename: name of the file to create
 * @text_content: NULL terminated string
 *
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written, content_len;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	content_len = 0;
	while(text_content[content_len])
	content_len++;

	bytes_written = write(fd, text_content, content_len);
	if (bytes_written < 0 || bytes_written != content_len)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
	return (-1);

	return (1);
}
