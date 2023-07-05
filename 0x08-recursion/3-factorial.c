#include "main.h"


/**
 * factorial - gets the factorial of n
 *
 * @n: number
 *
 * Return: factorial of n or (-1) if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
