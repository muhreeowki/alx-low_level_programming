#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: pointer to array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0, j = 0; i < size * size; i+= size, j++)
	{
		sum1 += *((a + i) + j);
	}

	for (i = 0, j = size - 1; i < size * size; i+= size, j--)
	{
		sum2 += *((a + i) + j);
	}

	printf("%d, %d\n", sum1, sum2);
}
