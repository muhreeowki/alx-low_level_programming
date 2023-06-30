#include "main.h"

/**
 * print_line - prints a line from the buffer
 *
 * @b: Pointer to the buffer
 * @line: line to print from the buffer
 * @num_bytes: Number of bytes to print from the buffer
 */

void print_line(char *b, int line, int num_bytes)
{
	int j;

	/* Hex values */
	for (j = 0; j < 10; j++)
	{
		if (j <= num_bytes)
			printf("%02x", b[line * 10 + j]);
		else
			printf("  ");

		if (j % 2)
			putchar(' ');
	}

	for (j = 0; j <= num_bytes; j++)
	{
		if (b[line * 10 + j] >= 32 && b[line * 10 + j] <= 126)
			putchar(b[line * 10 + j]);
		else
			putchar('.');
	}
}


/**
 * print_buffer - prints a buffer
 *
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);

		if (i < size / 10)
			print_line(b, i, 9);

		else
			print_line(b, i, size % 10 - 1);

		putchar('\n');
	}

	if (size == 0)
		putchar('\n');
}
