#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at specified index
 * a linked list.
 *
 * @head: pointer to the head of the linked list
 * @index: index of the node
 *
 * Return: the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL, *next_node = NULL, *delete_node = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next)
			next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	node = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (node == NULL)
			return (-1);

		node = node->next;
	}

	if (node && i == (index - 1))
	{
		if (node->next)
		{
			delete_node = node->next;
			next_node = delete_node->next;
			free(delete_node);
			node->next = next_node;
			return (1);
		}
	}

	return (-1);
}
