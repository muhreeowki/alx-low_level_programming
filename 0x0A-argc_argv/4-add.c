#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program prints out its name
 *
 * @argc: number of arguments passed into the program
 * @argv: array of arguments passed into the program
 *
 * Return: Always 0 (success) 1 (error)
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (argv[i][j] == '0' || isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
