#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 *
 * @head: head of a dlistint_t list.
 * @index: index to get
 *
 * Return: number of elements
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	while (curr)
	{
		for (i = 0; curr; i++)
		{
			if (i == index)
				return (curr);
			curr = curr->next;
		}
	}
	return (NULL);
}
