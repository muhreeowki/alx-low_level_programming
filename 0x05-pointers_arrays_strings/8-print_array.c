#include "main.h"

/**
 * print_array - prints out an array of integers
 *
 * @a: Address of the array
 * @n: Number of elements to be printed from the array
 */
void print_array(int *a, int n)
{
	int i;
	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
