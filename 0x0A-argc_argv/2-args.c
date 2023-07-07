#include <stdio.h>

/**
 * main - This program prints out its name
 *
 * @argc: number of arguments passed into the program
 * @argv: array of arguments passed into the program
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argv)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
