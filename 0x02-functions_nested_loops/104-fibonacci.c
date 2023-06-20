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
	fibonacci(98);
	putchar('\n');
	return (0);
}


/**
 * fibonacci - Prints the first n values of the fibonacci sequence
 *
 * @n: Number of fibonacci numbers to print
 */
void fibonacci(int n)
{
	unsigned short int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int fib;

	a = 1;
	b = 2;

	for (i = 2; i <= n + 1; i++)
	{
		printf("%li", a);
		fib = a + b;
		a = b;
		b = fib;
		if (i != n + 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
}


/**
 * print_long_number - Helper function to recursivly print the individual
 * digits of a long long integer n using only the putchar function.
 *
 * @n: integer to be printed

void print_long_number(unsigned long int n)
{
	if (n / 10)
		print_long_number(n / 10);

	putchar(n % 10 + '0');
}

*/
