#include <math.h>
#include <stdio.h>

/**
 * main - finds and prints the largest
 * prime factor of the number 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long num = 612852475143;

	for (i = sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
