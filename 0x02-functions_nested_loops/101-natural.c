#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int sum;
	int n;

	sum = 0;
	n = 0;
	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	print_number(sum);
	putchar('\n');
	return (0);
}

/**
 * print_number - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
