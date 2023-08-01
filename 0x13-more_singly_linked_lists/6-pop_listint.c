#include "lists.h"

/**
 * pop_listint - deletes the head node
 *
 * @head: pointer to the head of the linked list
 *
 * Return: the data of the head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next;
	listint_t *old;

	if (*head == NULL)
		return (0);

	old = *head;
	data = (*head)->n;
	next = (*head)->next;

	free(old);
	*head = next;

	return (data);
}
