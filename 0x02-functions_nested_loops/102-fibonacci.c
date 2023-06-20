#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	fibonacci(50);
	putchar('\n');
	return (0);
}


void fibonacci(int n)
{
	int i;
	int a;
	int b;
	int fib;

	a = 1;
	b = 1;

	for(i = 2; i <= n + 1; i++ )
	{
		print_number(a);
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

