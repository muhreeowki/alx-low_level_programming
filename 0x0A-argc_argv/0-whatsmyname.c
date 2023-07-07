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
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
