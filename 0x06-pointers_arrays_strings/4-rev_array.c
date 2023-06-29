#include "main.h"

int arrlen(int *a);

/**
 * rev_string - reverses a string
 *
 * @s: Address of string to reverse
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
