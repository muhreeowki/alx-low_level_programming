#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table to add the value to
 * @key: key for the value
 * @value: value to add
 *
 * Return: 1 (success) 0 (faliure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash = 0;
	hash_node_t *new_node = NULL;

	if (key == NULL || ht == NULL || *key == '\0')
		return (0);

	/* create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* initialize the node */
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	/* run the hash function with the key */
	hash = key_index((const unsigned char *)key, ht->size);
	/* add the new element to the list */
	ht->array[hash] = insert(ht->array[hash], new_node);

	return (1);
}

/**
 * insert - function that adds an element to a linked list
 *
 * @head: head of the linked list
 * @element: value to add
 *
 * Return: 1 (success) 0 (faliure)
 */

hash_node_t *insert(hash_node_t *head, hash_node_t *element)
{
	hash_node_t *node;

	if (head == NULL)
		return (element);
	/* Check if the key is already in the list */
	node = head;
	while (node)
	{
		if (strcmp(node->key, element->key) == 0)
		{
			node->value = element->value;
			free(element);
			return (head);
		}
	}
	/* if not prepend the element */
	element->next = head;
	head = element;

	return (head);
}
