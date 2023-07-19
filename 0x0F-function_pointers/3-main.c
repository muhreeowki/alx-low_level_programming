#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - This program perferms an operation on two numbers
 *
 * @argc: number of command line arguments passed in
 * @argv: array of command line arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*function)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = function(num1, num2);

	printf("%d\n", result);
	return (0);
}
