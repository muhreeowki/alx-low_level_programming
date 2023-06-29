#include "main.h"

int arrlen(int *a);

/**
 * reverse_array - reverses an array of intergers
 *
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int mid, i, temp;

	mid = n / 2;

	for (i = 0; i < mid; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
