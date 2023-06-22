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

	largest = 2;
	while (n % 2 == 0) 
	{
		printf("%d ", 2);
		n = n / 2;
	}

	for (i = 3; i * i <= n; i = i + 2) 
	{
		while (n % i == 0) 
		{
		    printf("%ld ", i);
		    if (i > largest)
			    largest = 1;
		    n = n / i;
		}
	}

	if (n > 2)
		printf("%ld ", n);

	printf("%ld\n", largest);

	return (0);
}


