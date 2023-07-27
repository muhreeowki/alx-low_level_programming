#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *list = h; 

	while (list != NULL)
	{
		count++;
		list = list->next;
	}

	return (count);
}
