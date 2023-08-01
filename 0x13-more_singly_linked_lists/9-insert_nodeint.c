#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a spcified index in
 * a linked list.
 *
 * @head: pointer to the head of the linked list
 * @idx: index of the node
 * @n: number to add to the node
 *
 * Return: the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new;
	unsigned int i;

	node = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head != NULL ? (*head)->next : NULL;
		*head = new;
		return (new);
	}

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
		node->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
