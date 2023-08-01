#include "lists.h"

/**
 * listint_len - gets the number of nodes
 * in a linked list
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
