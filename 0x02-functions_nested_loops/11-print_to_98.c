#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_to_98(120);
	return (0);
}


/**
 * print_to_98 - Prints all natural numbers from n to 98 in order.
 *
 * @n: Integer to start counting from
 */
void print_to_98(int n)
{
	int step;
	int num;

	num = n;

	if(n > 98)
	{
		step = -1;
	}

	else
	{
		step = 1;
	}

	while(n != 98) 
	{
		putchar(',');
		putchar(' ');
		n += step;
	}
	putchar('9');
	putchar('8');
	putchar('\n');
}
