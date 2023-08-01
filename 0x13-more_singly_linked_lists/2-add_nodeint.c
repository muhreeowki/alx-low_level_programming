#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 *
 * @head: pointer to the head of the linked list
 * @str: data to add to new node
 *
 * Return: address of new element
 * return NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;
	*head = temp;

	return (temp);
}
