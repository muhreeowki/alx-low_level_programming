#include <stdio.h>

/**
 * main - This program prints out its name
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
