#include <stdio.h>

/**
 * main - This program prints out its name
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
