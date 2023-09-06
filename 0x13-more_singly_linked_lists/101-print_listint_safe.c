#include "lists.h"


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
	const listint_t *item, **list;
	int i, loop = 0, start = 1;

	if (head == NULL)
		return (0);

	list = make_pointer_list(head, NULL, 1);
	item = head;

	while (item != NULL && loop == 0)
	{
		for (i = 0; list[i] != NULL; i++)
		{
			if (start == 1)
			{
				start = 0;
				break;
			}
			if ((void *)list[i] == (void *)item)
			{
				printf("-> [%p] %d\n", (void *)item, item->n);
				free(list);
				return (count);
			}
		}
		if (loop == 1)
			break;
		printf("[%p] %d\n", (void *)item, item->n);
		count++;
		list = make_pointer_list(item, list, count);
		if (list == NULL)
			exit(98);
		item = item->next;
	}

	free(list);
	return (count);
}


/**
 * make_pointer_list - adds a pointer to a list of pointers,
 * or creates a list of pointers if no list is provided.
 *
 * @pointer: pointer to be added
 * @list: list to append to
 * @count: number of items in the list
 *
 * Return: number of nodes
 */
const listint_t **make_pointer_list(const listint_t *pointer,
		const listint_t **list, int count)
{
	const listint_t **new_list = malloc(sizeof(listint_t **) * (count + 2));
	int i;

	/* if malloc fails */
	if (new_list == NULL)
	{
		free(list);
		return (NULL);
	}

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
