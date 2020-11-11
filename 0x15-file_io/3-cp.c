#include "holberton.h"
void printferror(const char *msg, const char *argum, int exitcode);
/**
 * main -  copies the content of a file to another file.
 * @arg: get the array of characters from the terminal.
 * @length: get the size of the length of characters.
 * Return: 0 in succes or -1 if exist a error.
 */
int main(int length, char **arg)
{
	int fd_to = 0, fd_from = 0, bytes = 0, closef = 0, closet = 0, byteswrite = 0;
	char buffer[BUFSIZ];

	if (length != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Open file from, */
	fd_from = open(arg[1], O_RDONLY);
	if (fd_from == -1)
		printferror("Error: Can't read from file", arg[1], 98);
	/*Open file to */
	fd_to = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		printferror("Error: Can't write to", arg[2], 99);

	while ((bytes = read(fd_from, buffer, BUFSIZ)) > 0)
	{
		byteswrite = write(fd_to, buffer, bytes);
			if (byteswrite == -1)
				printferror("Error: Can't write to", arg[2], 99);
	}
	if (bytes == -1)
		printferror("Error: Can't read from file", arg[1], 98);

	closef = close(fd_from);
	if (closef == -1)
		printferror("Error: Can't close fd", arg[1], 100);
	closet = close(fd_to);
	if (closet == -1)
		printferror("Error: Can't close fd", arg[2], 100);
	return (0);
}
/**
 * printferror - print the error mesage of a function.
 * @msg: get the array of characters for printf.
 * @argum: get the argument to printf.
 * @exitcode: the number to print in exit.
 */
void printferror(const char *msg, const char *argum, int exitcode)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, argum);
	exit(exitcode);
}
