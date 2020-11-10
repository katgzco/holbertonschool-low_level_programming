#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file..
 * @filename: the name of the file to create.
 * @text_content: get the array of characters.
 * Return: 1 in succes or -1 in error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, length = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
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
