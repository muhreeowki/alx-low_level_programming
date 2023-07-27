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
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	temp->next = *head;
	temp->str = strdup(str);
	temp->len = i;
	*head = temp;

	return (temp);
}
