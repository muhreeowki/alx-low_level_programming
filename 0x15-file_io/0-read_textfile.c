#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: Name of the file to be opened.
 * @letters: the number of letters it should read and print
 *
 * Return: Number of letters the program could read and print,
 * 0 is returned if ->
 *	• file could not be opened or read,
 *	• if filename is null,
 *	• write function fails or does not write expected number of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* 1. open the file. if unable to open return 0 */
	/* 2. read the file's content. */
	/* 3. write the file's content */
	/* 4. close the file */
	/* 5. return the count. */

	int fd, count, written;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY)
	if (fd == -1)
		return (0);

	count = read(fd, buf, letters);
	if (count == -1)
		return (0);

	written = write(1, buf, count);
	if (written != count)
		return (0);

	close(fd);
	return (written);
}
