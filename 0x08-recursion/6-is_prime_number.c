#include "main.h"

/**
 * check_prime - helper function to check if n is divisible by i
 *
 * @n: number
 * @i: divisor
 *
 * Return: 1 (prime) 0 (not prime)
 */

int check_prime(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);

	if (i >= 9)
		return (1);

	return (check_prime(n, i + 1));
}


/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number
 *
 * Return: 1 (prime) 0 (not prime)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
