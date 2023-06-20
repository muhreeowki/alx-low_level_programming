#include <stdio.h>


void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	print_alphabet();
	return (0);
}


/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
