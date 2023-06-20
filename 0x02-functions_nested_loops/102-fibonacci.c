#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void print_long_number(unsigned long long int n);

int main(void)
{
	fibonacci(50);
	putchar('\n');
	return (0);
}


void fibonacci(int n)
{
	unsigned short int i;
	unsigned long long int a;
	unsigned long long int b;
	unsigned long long int fib;

	a = 1;
	b = 1;

	for(i = 2; i <= n + 1; i++ )
	{
		print_long_number(a);
		fib = a + b;
		a = b;
		b = fib;
		if(i != n + 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
}


/**
 * print_number - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void print_long_number(unsigned long long int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_long_number(n / 10);

	putchar(n % 10 + '0');
}

