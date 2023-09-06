#include "lists.h"

const listint_t **make_pointer_list(const listint_t *pointer, const listint_t **list, int count);

/**
 * print_listint_safe - Print each item in a linked list
 *
 * @head: Head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *item = head;
	const listint_t **list = make_pointer_list(NULL, NULL, 1);
	int i, loop = 0;

	if (head == NULL)
		exit(98);

	while (item != NULL)
	{
		/* Check if item is in list */
		for (i = 0; list[i] != NULL; i++)
		{
			if (list[i] == item)
			{
				loop = 1;
				break;
			}
		}
		if (loop == 1)
			break;
		printf("[%p] %d\n", (void *)item, item->n);
		count++;
		list = make_pointer_list(item, list, count);
		item = item->next;
	}

	if (loop == 1)
		printf("-> [%p] %d\n", (void *)item, item->n);

	free(list);
	return (count);
}

const listint_t **make_pointer_list(const listint_t *pointer, const listint_t **list, int count)
{
	const listint_t **new_list = malloc(sizeof(listint_t **) * (count + 2));
	int i;

	/* if malloc fails */
	if (new_list == NULL)
		return (NULL);

	/*If list is empty*/
	if (list == NULL)
	{
		new_list[0] = pointer;
		new_list[1] = NULL;
		return (new_list);
	}

	/*loop through the old list, and */
	for (i = 0; i < count; i++)
	{
		/* copy the values from old list to new list */
		if (list[i] != NULL)
			new_list[i] = list[i];
	}

	/* add the new pointer to the list */
	new_list[i++] = pointer;
	new_list[i] = NULL;
	free(list);
	return (new_list);
}
