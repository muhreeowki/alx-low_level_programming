#include "lists.h"

/**
 * find_listint_loop - finds a cycle in a linked list
 *
 * @head: Head of the linked list
 *
 * Return: address of where cycle occures
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer1 = NULL, *pointer2 = NULL;

	if (head)
	{
		pointer1 = pointer2 = head;

		if (head->next && head->next->next && head == head->next->next)
			return (head->next->next);

		while (pointer2 != NULL && pointer2->next != NULL)
		{
			pointer1 = pointer1->next;
			pointer2 = pointer2->next->next;

			if (pointer1 == pointer2)
				break;
		}

		if (pointer1 == pointer2)
		{
			pointer1 = head;

			while (pointer1->next != pointer2->next)
			{
				pointer1 = pointer1->next;
				pointer2 = pointer2->next;
			}

			return (pointer1->next);
		}
	}
	return (NULL);
}
