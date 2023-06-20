#include <stdio.h>
#include "main.h"

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
