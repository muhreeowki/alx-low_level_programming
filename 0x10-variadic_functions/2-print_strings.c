#include "variadic_functions.h"

/**
 * print_strings - prints all strings passed in as arguments
 *
 * @n: number of strings
 * @separator: chars to separate the numbers
 *
 * Return: sum of all arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
