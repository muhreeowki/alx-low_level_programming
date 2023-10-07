#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table
 *
 * @size: size of the array
 *
 * Return: new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	shash_node_t **array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = array;
	new_table->shead = NULL;
	new_table->stail = NULL;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}



/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table to add the value to
 * @key: key for the value
 * @value: value to add
 *
 * Return: 1 (success) 0 (faliure)
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash = 0;
	shash_node_t *new_node = NULL;

	if (key == NULL || ht == NULL || *key == '\0')
		return (0);

	/* create a new node */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	/* initialize the node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	/* run the hash function with the key */
	hash = key_index((const unsigned char *)key, ht->size);
	/* add the new element to the list */
	ht->array[hash] = insert2(ht, hash, new_node);

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

shash_node_t *insert2(shash_table_t *ht, unsigned long int index, shash_node_t *element)
{
	shash_node_t *node, *head;

	head = ht->array[index];
	if (head == NULL)
	{
		if (index == 0)
			ht->shead = head;
		return (element);
	}

	/* Check if the key is already in the list */
	node = head;
	while (node)
	{
		if (strcmp(node->key, element->key) == 0)
		{
			free(node->value);
			node->value = element->value;
			free(element->key);
			free(element);
			return (head);
		}
		node = node->next;
	}
	/* if not prepend the element */
	element->next = head;
	head = element;

	return (head);
}
