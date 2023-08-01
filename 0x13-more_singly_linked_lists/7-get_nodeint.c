#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a specified index of
 * a linked list.
 *
 * @head: pointer to the head of the linked list
 * @index: index of the node
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = head;

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
	}

	if (node && i == index)
		return (node);

	return (NULL);
}
