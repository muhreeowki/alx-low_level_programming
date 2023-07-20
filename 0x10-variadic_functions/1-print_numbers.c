#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed in as arguments
 *
 * @n: number of arguments
 * @separator: chars to separate the numbers
 *
 * Return: sum of all arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
