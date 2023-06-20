#include <stdio.h>
#include "main.h"

void print_long_number(unsigned long int n);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci_2();
	putchar('\n');
	return (0);
}



/**
 * fibonacci_2 - Prints the first n values of the fibonacci sequence
 */
void fibonacci_2(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int fib;
	unsigned long int sum;

	a = 1;
	b = 2;
	sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		fib = a + b;
		a = b;
		b = fib;
	}
	print_long_number(sum);
}


/**
 * print_long_number - Helper function to recursivly print the individual
 * digits of a long long integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void print_long_number(unsigned long int n)
{
	if (n / 10)
		print_long_number(n / 10);

	putchar(n % 10 + '0');
}

