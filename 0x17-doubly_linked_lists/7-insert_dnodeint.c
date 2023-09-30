#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 *
 * @h: head of a dlistint_t list.
 * @idx: index to insert node to.
 * @n: number
 *
 * Return: sum of elements
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr_node = NULL, *new_node = NULL;
	unsigned int i = 0;

	/* check if list is empty and check if idx is 0 */
	if (h == NULL || *h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	curr_node = *h;

	/* loop through the list till idx - 1 */
	for (i = 0; i < idx - 1; i++)
	{
		if (curr_node->next)
			curr_node = curr_node->next;
		else
			return (NULL);
	}

	/* insert the node */
	if (curr_node && i == idx - 1)
	{
		new_node->prev = curr_node;
		new_node->next = curr_node->next;
		(curr_node->next)->prev = new_node;
		curr_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
