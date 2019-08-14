#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 *@filename: is the string of the path to the file that will be printed.
 *
 *@text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int closed;
	size_t writed;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		writed = write(fd, text_content, len);
		if (writed != (unsigned int) len)
		{
			return (-1);
		}
	}

	closed = close(fd);

	return (closed < 0 ? -1 : 1);
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
