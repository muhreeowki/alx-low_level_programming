#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates a valid password
 *
 * Return: Always 0 (success)
 */

int main(void) 
{
	char password[100];
	char c;
	int sum, i, j;
	time_t t;

	sum = 2772;
	i = 0;
	srand((unsigned int) time(&t));

	while (sum - 33 > 93)
	{
		c = rand() % 93;
		password[i] = c + '!';
		sum -= password[i];
		i++;
	}

	if (sum > 0)
		password[i] = sum;
	else
		i--;

	for (j = 0; j <= i; j++)
	{
		putchar(password[j]);
	}
	putchar('\n');
	return (0);
}
