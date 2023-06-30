#include <stdio.h>

/**
 * fibonacci - Prints the first n values of the fibonacci sequence
 */
void fibonacci(void)
{
	int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int fib;

	a = 1;
	b = 2;
	i = 0;

	while (i < 98)
	{
		printf("%ld", a);

		if (i < 97)
			printf(", ");

		fib = a + b;
		a = b;
		b = fib;
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci();
	putchar('\n');
	return (0);
}
