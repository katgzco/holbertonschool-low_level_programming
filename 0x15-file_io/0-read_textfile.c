#include "holberton.h"
/**
 * read_textfile -  reads a text file and prints it to the STDIO
 * @filename: the name of the file.
 * @letters: the length of the text file.
 * Return: the letters or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char buffer[1024];
	ssize_t bytes = 0;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(fd);
	return (bytes);
}
