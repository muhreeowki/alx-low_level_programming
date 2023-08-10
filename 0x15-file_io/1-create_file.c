#include "main.h"
#include <stdio.h>

int _strlen(char *str);

/**
 * create_file - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: Name of the file to be opened.
 * @text_content: a NULL terminated string
 *
 * Return: Number of letters the program could read and print,
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, written;

	if (filename == NULL || *filename == '\0')
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	length = _strlen(text_content);

	if (length > 0)
	{
		written = write(fd, text_content, length);

		if (written < 0 || written != length)
			return (-1);
	}

	close(fd);
	return (1);
}


/**
 * _strlen - finds the length of a string
 *
 * @str: NULL terminated
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
