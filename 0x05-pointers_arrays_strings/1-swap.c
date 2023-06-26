#include "main.h"

/**
 * swap_int - Swaps the values of two varaiables
 *
 * @a - Variable to be swapped
 * @b - Variable to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
