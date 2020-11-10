#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string.
 * Return: 1 in succes or -1 in error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, length = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (length = 0; *(text_content + length); length++)
		;
	bytes = write(fd, text_content, length);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
