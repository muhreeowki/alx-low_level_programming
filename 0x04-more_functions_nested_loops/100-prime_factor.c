#include "main.h"

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long n;
	unsigned long largest;
	unsigned long i;
	unsigned long j;
	int prime;

	n = 612852475143;
	largest = 2;

	for (i = 1; i <= n; i++)
	{
		/* Find a factor */
		if(n % i == 0)
		{
			prime = 0;

			/* Check if the factor is prime. */
			for(j = 2; j < 9; j++)
			{
				if(i % j == 0)
				{
					prime = 1;
					break;
				}
			}

			/* If it is prime, compare it to the largest. */
			if(prime == 0)
			{
				printf("%ld", i);
				if(i > largest)
				{
					largest = i;
				}
			}
		}

	}

	printf("%ld\n", largest);
	return (0);
}
