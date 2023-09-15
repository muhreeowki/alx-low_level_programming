#include "lists.h"

/**
 * sum_dlistint - sums up a list of data in a linked list
 *
 * @head: head of a dlistint_t list.
 *
 * Return: sum of elements
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *node = NULL;
	unsigned int i = 0;

	/* create the node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize the node */
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (h == NULL || *h == NULL)
		return (NULL);

	node = *h;

	while (node && i < idx - 1)
	{
		node = node->next;
		i++;
	}

	if (node && node->next)
	{
		new_node->next = node->next;
		node->next->prev = new_node;
		node->next = new_node;
		return (new_node);
	}

	return (NULL);
}
