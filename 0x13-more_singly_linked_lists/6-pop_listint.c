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

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;

	return (data);
}
