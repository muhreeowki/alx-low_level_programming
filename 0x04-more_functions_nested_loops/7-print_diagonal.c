#include "main.h"

/**
 * print_line - prints n number of underscores
 *
 * @n: number of underscores to print
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = i - 1; j < n; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
	}
		putchar('\n');
}
