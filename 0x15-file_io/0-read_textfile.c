#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: Name of the file to be opened.
 * @letters: Number of letters to read and print in the file.
 *
 * Return: Number of letters the program could read and print,
 * 0 is returned if ->
 * 	• file could not be opened or read,
 * 	• if filename is null,
 * 	• write function fails or does not write expected number of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* 1. open the file. if unable to open return 0 */
	/* 2. loop through the file letters times, printing a char each time using _putchar. if _putchar returns 0, return 0. */
	/* 3. count the amount of chars printed. */
	/* 4. return the count. */

	int fd, count, written;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || *filename == '\0' || buf == NULL)
		return (0);

	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);

	count = read(fd, buf, letters);
	if (count == -1)
		return (0);

	written = write(1, buf, count);
	if (written != count || written == -1)
		return (0);

	return (written);
}
