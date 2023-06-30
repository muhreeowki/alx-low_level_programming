#include "main.h"
#include <stdio.h>

void reverse(char *a);

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
	int i, j, carry, num1, num2, sum, r_index;

	num1 = 0;
	num2 = 0;
	sum = 0;
	r_index = 0;
	carry = 0;

	/* Find the length of n1 and n2 */
	for (i = 0; *(n1 + i) != '\0'; i++)
		;
	for (j = 0; *(n2 + j) != '\0'; j++)
		;

	i--;
	j--;

	if (i >= size_r || j >= size_r)
		return (0);

	while (i >= 0 || j >= 0 || carry == 1)
	{
		num1 = i >= 0 ? *(n1 + i) - '0' : 0;
		num2 = j >= 0 ? *(n2 + j) - '0' : 0;

		sum = num1 + num2 + carry;

		carry = sum >= 10 ? 1 : 0;

		if (r_index >= (size_r - 1))
			return (0);

		*(r + r_index) = (sum % 10) + '0';

		r_index++;
		i--;
		j--;
	}

	if (r_index == size_r)
		return (0);

	*(r + r_index) = '\0';
	reverse(r);

	return (r);
}

/**
 * reverse - reverses an array or string
 *
 * @a: Pointer to the array
 */

void reverse(char *a)
{
	int mid, i, temp, len;

	len = 0;

	while (*(a + len) != '\0')
		len++;

	len--;

	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (len - i));
		*(a + (len - i)) = temp;
	}

	*(a + (len + 1)) = '\0';
}
