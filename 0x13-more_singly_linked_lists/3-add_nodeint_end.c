#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 *
 * @head: pointer to the head of the linked list
 * @n: data to add to new node
 *
 * Return: address of new element
 * return NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head == NULL)
		*head = temp;
	else
	{
		listint_t *tail = *head;

		while (tail->next)
			tail = tail->next;

		tail->next = temp;
	}

	return (temp);
}
