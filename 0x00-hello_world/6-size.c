#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (unsigned short)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned short)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (unsigned short)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned short)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (unsigned short)sizeof(float));
	return (0);
}
