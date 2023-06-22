#include "main.h"

/**
 * main - Prints all the numbers from 1 - 100
 * but for multiples of three it prints Fizz instead of the number
 * and for the multiples of five it prints Buzz.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if(i != 100)
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
