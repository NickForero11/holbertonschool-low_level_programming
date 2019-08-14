#include "holberton.h"

int fill_file(char *buffer, size_t *readed, size_t *writed, int fd_origin,
	int fd_destiny, char *filename_destiny)
	{
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename_destiny);
			exit(99);
			return (-1);
	}
	*readed = read(fd_origin, buffer, 1024);
	*writed = write(fd_destiny, buffer, 1024);
	if (*writed != 1024)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename_destiny);
			exit(99);
			return (-1);
	}
	free(buffer);
	while (*readed == 1024)
	{
		free(buffer);
		buffer = malloc(1024);
		if (buffer == NULL)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				filename_destiny), exit(99);
				return (-1);
		}
		*readed = read(fd_origin, buffer, 1024);
		*writed = write(fd_destiny, buffer, 1024);
	}
	return (1);
}

/**
 * copy - Copies the content of a file to another file.
 *
 *@filename_origin: is the string of the path to the origin file to copy.
 *
 *@filename_destiny: is the string of the path to the destiny file to fill.
 *
 * Return: 1 on success, -1 on failure.
 */

int copy(const char *filename_origin, char *filename_destiny)
{
	int fd_origin;
	int fd_destiny;
	int closed_origin;
	int closed_destiny;
	size_t readed;
	size_t writed;
	char *buffer;

	if (filename_origin == NULL || filename_destiny == NULL)
	{
		return (-1);
	}
	fd_origin = open(filename_origin, O_RDONLY);
	fd_destiny = open(filename_destiny, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_origin == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename_origin);
		exit(98);
	}
	if (fd_destiny == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename_destiny);
		exit(99);
	}
	buffer = malloc(1024);
	fill_file(buffer, &readed, &writed, fd_origin, fd_destiny, filename_destiny);
	closed_origin = close(fd_origin), closed_destiny = close(fd_destiny);
	if (closed_origin < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_origin);
		exit(100);
	}
	if (closed_destiny < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_destiny);
		exit(100);
	}
	return (1);
}


/**
 * main - check the code for Holberton School students.
 *
 * @ac: number of parameters passed to the program + 1 for the program's name.
 *
 *@av: array of the strings that are passed to the program including his name.
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		return (-1);
	}

	res = copy(av[1], av[2]);
	return (res);
}
