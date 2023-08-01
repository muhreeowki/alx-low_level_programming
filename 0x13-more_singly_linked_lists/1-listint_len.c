#include "lists.h"

/**
 * print_listint - Print each item in a linked list
 *
 * @h: Head of the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *item = h;

	for (i = 0; item != NULL; i++)
		item = item->next;

	return (i);
}

/**
 * _print_number - Print an unsigned integer to stdout.
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
