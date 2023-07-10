#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: text
 * Return: 1 or 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (length)
		bytes = write(fd, text_content, length);
	close(fd);
	return (bytes == length ? 1 : -1);
}
