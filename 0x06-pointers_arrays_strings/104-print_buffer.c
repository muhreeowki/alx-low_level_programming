#include "main.h"

/**
 * print_buffer - prints a buffer
 *
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		if (i % 10 == 0)
		{
			if (i != 0)
			{
				putchar(' ');

				for (j = i - 10; j < i; j++)
				{
					if (*(b + j) >= 33 && *(b + j) <= 126)
						putchar(*(b + j));
					else
						putchar('.');
				}

				putchar('\n');
			}

			printf("%p: ", (b + i));
		}

		else if (i % 2 == 0)
			printf(" ");

		if (*(b + i) == '\0')
			printf("00");

		else if (*(b + i) > 0 && *(b + i) < 16)
			printf("%x0", *(b + i));

		else
			printf("%x", *(b + i));
		i++;
	}
	putchar('\n');
}
