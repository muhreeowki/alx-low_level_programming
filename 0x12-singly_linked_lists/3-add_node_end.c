#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: pointer to the head of the linked list
 * @str: data to add to new node
 *
 * Return: address of new element
 * return NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *tail;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = i;

	if (*head == NULL)
		*head = temp;
	else
	{
		tail = *head;

		while (tail->next)
			tail = tail->next;

		tail->next = temp;
	}

	return (temp);
}
