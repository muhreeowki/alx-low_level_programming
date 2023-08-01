#include "lists.h"

/**
 * print_listint - Print each item in a linked list
 *
 * @h: Head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	int n;
	const listint_t *item = h;

	while (item != NULL)
	{
		n = item->n;
		if (item->n < 0)
		{
			_putchar('-');
			n = -n;
		}
		print_number(n);
		_putchar('\n');
		item = item->next;
		i++;
	}

	return (i);
}

/**
 * print_number - Print an unsigned integer to stdout.
 *
 * @n: The unsigned integer to convert and print.
 *
 * Return: None (void).
 */
void print_number(unsigned long int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar('0' + n % 10);
}
