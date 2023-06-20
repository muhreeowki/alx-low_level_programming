#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}


/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 97;
		while (j <= 122)
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
