#include "holberton.h"
#define PERMS 0664
void printferror(const char *msg, const char *argum, ssize_t exitcode);
/**
 * main -  copies the content of a file to another file.
 * @arg: get the array of characters from the terminal.
 * @length: get the size of the length of characters.
 * Return: 0 in succes or -1 if exist a error.
 */
int main(int length, char **arg)
{
	ssize_t FD_VALUEF = 0, FD_VALUET = 0, bytes = 0, closef = 0, closet = 0;
	char buffer[BUFSIZ];

	if (length != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Open file from, */
	FD_VALUEF = open(arg[1], O_RDONLY);
	if (FD_VALUEF == -1)
		printferror("Error: Can't read from file", arg[1], 98);
	/*Open file to */
	FD_VALUET = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC, PERMS);
	if (FD_VALUET == -1)
		printferror("Error: Can't write to", arg[2], 99);

	while ((bytes = read(FD_VALUEF, buffer, BUFSIZ)) > 0)
	{
		if (write(FD_VALUET, buffer, bytes) != bytes)
			printferror("Error: Can't write to ", arg[2], 99);
	}

	closef = close(FD_VALUEF);
	if (closef == -1)
		printferror("Error: Can't close fd", arg[1], 100);
	closet = close(FD_VALUET);
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
void printferror(const char *msg, const char *argum, ssize_t exitcode)
{
	dprintf(STDERR_FILENO, " %s %s\n", msg, argum);
	exit(exitcode);
}
