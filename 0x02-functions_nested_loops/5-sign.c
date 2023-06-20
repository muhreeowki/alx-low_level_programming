#include <stdio.h>

/* Function prototype */
int print_sign(int n);

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	return (0);
}


/**
 * print_sign - returns the sign of a number.
 *
 * @n: ASCII value of the char
 *
 * Return: 0 if n is 0, 1 if n > 0 and -1 if n < 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else
	{
		putchar('-');
		return (-1);
	}
}


