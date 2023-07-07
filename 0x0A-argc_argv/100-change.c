#include <stdio.h>
#include <stdlib.h>

/**
 * get_coins - returns the number of coins needed to
 * to make an amount of money.
 *
 * @ammount: ammount of money
 *
 * Return: number of coins
 */
int get_coins(int ammount)
{
	int coins;

	coins = 0;

	while (ammount > 0)
	{
		if (ammount >= 25)
		{
			ammount -= 25;
			coins++;
		}
		else if (ammount >= 10)
		{
			ammount -= 10;
			coins++;
		}
		else if (ammount >= 5)
		{
			ammount -= 5;
			coins++;
		}
		else if (ammount >= 2)
		{
			ammount -= 2;
			coins++;
		}
		else
		{
			ammount -= 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of arguments passed into the program
 * @argv: array of arguments passed into the program
 *
 * Return: Always 0 (success) 1 (error)
 */

int main(int argc, char *argv[])
{
	int ammount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ammount = atoi(argv[1]);

	if (ammount < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", get_coins(ammount));
	return (0);
}

