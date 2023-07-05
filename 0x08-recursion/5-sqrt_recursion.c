#include "main.h"

/**
 * guess_sqrt - helper function to find the square root of n
 *
 * @n: number
 * @i: number of guesses
 *
 * Return: square root of n
 */

int guess_sqrt(int n, int i)
{
	if (i >= n / 2)
		return (-1);

	if (i * i == n)
		return (i);

	return (guess_sqrt(n, ++i));
}

/**
 * _sqrt_recursion - returns the square root of n
 *
 * @n: number
 *
 * Return: square root of n or (-1) if n has no
 * natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	return (guess_sqrt(n, 1));
}

