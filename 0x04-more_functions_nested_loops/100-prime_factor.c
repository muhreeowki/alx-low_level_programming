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
	
	n = 612852475143;
	largest = 2;

	/* Divide n by 2 until it cannot be divided evenly into 2 */
	while(n % 2 != 0)
	{
		n /= 2;
	}

	/* divide n by */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			if(i > largest)
				largest = i;
			n /= i;
		}
	}

	printf("%ld\n", largest);
	return (0);
}
