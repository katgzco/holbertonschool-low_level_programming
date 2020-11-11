#include "holberton.h"
#define PERMS 0666
/**
 * main -  copies the content of a file to another file.
 * @arg: get the array of characters from the terminal.
 * @length: get the size of the length of characters.
 * Return: 0 in succes or -1 if exist a error.
 */
int main(int length, char **arg __attribute__((unused)))
{
	ssize_t FD_VALUEF = 0, FD_VALUET = 0, bytes = 0;
	char buffer[BUFSIZ];

	if (length != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Open file from, */
	FD_VALUEF = open(arg[1], O_RDONLY);
	if (FD_VALUEF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}
	/*Open file to */
	FD_VALUET = open(arg[2], O_CREAT | O_TRUNC | O_WRONLY, PERMS);
	if (FD_VALUET == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
		exit(99);
	}
	while ((bytes = read(FD_VALUEF, buffer, BUFSIZ)) > 0)
		if (write(FD_VALUET, buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
			close(FD_VALUEF);
			close(FD_VALUET);
			exit(99);
		}
	close(FD_VALUEF);
	close(FD_VALUET);
	return (0);
}
