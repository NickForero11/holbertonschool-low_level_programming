#include "holberton.h"

/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output.
 *
 *@filename: is the string of the path to the file that will be printed.
 *
 *@letters: is the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t readed;
	size_t writed;
	int closed;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}

	readed = read(fd, buffer, letters);

	writed = write(STDOUT_FILENO, buffer, readed), closed = close(fd);

	if (closed < 0 || writed != readed)
	{
		return (0);
	}

	free(buffer);

	return (readed);
}
