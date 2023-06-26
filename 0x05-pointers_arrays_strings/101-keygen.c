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
	/* Variables */
	int i;
	int randomizer;
	char password[10];
	char symbols[] = "!@#$^&*?<>";

	/* Seed random number generator with current time*/
	srand((unsigned int) (time(NULL)));

	randomizer = rand() % 4;

	for (i = 0; i <= 10; i++)
	{
		/* lowercase letter */
		if (randomizer == 1)
		{
			*(password + i) = (rand() % (97 - 122 + 1)) + 97;
		}
		/* uppercase letter */
		else if (randomizer == 2)
		{
			*(password + i) = (rand() % (65 - 90 + 1)) + 65;
		}
		/* symbol */
		else if (randomizer == 3)
		{
			*(password + i) = symbols[rand() % 10];
		}
		/* number */
		else
		{
			*(password + i) = (rand() % (48 - 57 + 1)) + 48;
		}

		randomizer = rand() % 4;
		printf("%c", *(password + i));
	}

	return (0);
}
