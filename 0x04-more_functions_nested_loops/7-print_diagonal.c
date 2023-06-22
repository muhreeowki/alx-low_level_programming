#include "main.h"

/**
 * print_diagonal - prints n number of '\'
 *
 * @n: number of underscores to print
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = n; i > 0; i--)
	{
		for (j = i; j < n; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
	}
}
