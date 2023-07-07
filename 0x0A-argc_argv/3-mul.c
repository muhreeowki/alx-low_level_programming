#include <stdio.h>
#include <stdlib.h>

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
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
