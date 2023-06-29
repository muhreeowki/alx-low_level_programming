#include "main.h"

/**
 * infinite_add - Adds two numbers
 *
 * @n1: pointer to string with number
 * @n2: pointer to string with number
 * @r: pointer to buffer to store sum
 * @size_r: size of the buffer r in bytes
 *
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry, num1, num2, sum, index;

	num1 = 0;
	num2 = 0;
	sum = 0;
	index = 0;
	carry = 0;
	

	for (i = 0; n1[i] != '\0'; i++);
	for (j = 0; n2[j] != '\0'; j++);
	
	i--;
	j--;

	while ((i > 0 || j > 0) && (i < size_r || j < size_r))
	{
		num1 = i > 0 ? n1[i] - '0' : 0;
		num2 = j > 0 ? n2[j] - '0' : 0;

		sum = num1 + num2 + carry;
		carry = sum / 10;
		*(r + index) = sum % 10;

		i--;
		j--;
		index++;
	}

	return (r);
}

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
