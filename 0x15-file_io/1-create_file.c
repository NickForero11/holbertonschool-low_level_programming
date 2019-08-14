#include "holberton.h"

/**
 * create_file - Creates a file with certain content.
 *
 *@filename: is the string of the path to the file that will be printed.
 *
 *@text_content: is the number of letters it should read and print.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int closed;
	size_t writed;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		writed = write(fd, text_content, len);
		closed = close(fd);
	}

	if (closed < 0 || writed != (unsigned int) len)
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The char pointer of the string that will be checked
 *
 * Return: the length of a string in a integer value.
 *
 */

int _strlen(char *s)
{
	int digits;

	digits = 0;
	while (*(s + digits) != '\0')
	{
		digits++;
	}
	return (digits);
}
