#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a spcified index in
 * a linked list.
 *
 * @head: pointer to the head of the linked list
 * @index: index of the node
 *
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		if (node == NULL)
		{
			free(new);
			return (NULL);
		}

		node = node->next;
	}

	if (node)
	{
		new->next = node->next ? node->next : NULL;
		new->n = n;
		node->next = new;
	}
	else
	{
		free(new);
		return (NULL);
	}

	return (new);
}
