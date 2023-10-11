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
 * shash_table_set - function that adds an element to the hash table
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
	ht->array[hash] = shash_insert(ht->array[hash], new_node);
	/* add the new element to the ordered list */
	if (ht->shead && ht->stail)
	{
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (1);
		}
		return (sorted_insert(ht, new_node));
	}
	else
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}

	return (1);
}



/**
 * shash_insert - function that adds an element to a linked list
 *
 * @head: head of the linked list
 * @element: value to add
 *
 * Return: head
 */
shash_node_t *shash_insert(shash_node_t *head, shash_node_t *element)
{
	shash_node_t *node;

	/* Check if the key is already in the list */
	node = head;
	while (node)
	{
		if (strcmp(node->key, element->key) == 0)
		{
			free(node->value);
			node->value = element->value;
			element->value = NULL;
			return (head);
		}
		node = node->next;
	}
	/* If element is not in the list prepend the element */
	element->next = head;

	return (element);
}



/**
 * sorted_insert - function to insert a node into a sorted linked list
 *
 * @ht: hash table
 * @element: node to insert
 *
 * Return: 1 (success) 0 (failure)
 */
int sorted_insert(shash_table_t *ht, shash_node_t *element)
{
		shash_node_t *node = ht->shead;
		int check = 0;

		if (ht == NULL || element == NULL)
			return (0);

		/* Insert in the beginning */
		if (node == NULL || strcmp(element->key, node->key) < 0)
		{
			element->sprev = NULL;
			element->snext = node;
			node->sprev = element;
			ht->shead = element;
			return (1);
		}

		/* Insert in the middle */
		while (node->snext)
		{
			check = strcmp(element->key, node->snext->key);
			if (check < 0)
			{
				element->snext = node->snext;
				element->sprev = node;
				node->snext->sprev = element;
				node->snext = element;
				return (1);
			}
			node = node->snext;
		}

		/* Insert at the end */
		element->snext = NULL;
		element->sprev = node;
		node->snext = element;
		ht->stail = element;
		return (1);
}



/**
 * shash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: hash table to add the value to
 * @key: key to value
 *
 * Return: the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* get the index */
	index = key_index((const unsigned char *)key, ht->size);

	/* search for the key */
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, (char *)key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}



/**
 * shash_table_print - function that prints a hash table
 *
 * @ht: hash table to print
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int printed = 0;

	if (ht)
	{
		printf("{");
		node = ht->shead;

		while (node)
		{
			if (printed == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				printed = 1;
				node = node->snext;
				continue;
			}
			printf(", '%s': '%s'", node->key, node->value);
			node = node->snext;
		}

		printf("}\n");
	}
}



/**
 * shash_table_print_rev - function that prints a hash table in reverse order
 *
 * @ht: hash table to print
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int printed = 0;

	if (ht)
	{
		printf("{");
		node = ht->stail;

		while (node)
		{
			if (printed == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				printed = 1;
				node = node->sprev;
				continue;
			}
			printf(", '%s': '%s'", node->key, node->value);
			node = node->sprev;
		}

		printf("}\n");
	}
}


/**
 * shash_table_delete - function that deletes a hash table
 *
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *next;

	if (ht)
	{
		node = ht->shead;

		while (node)
		{
			next = node->snext;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}

		free(ht->array);
		free(ht);
	}
}



/**
 * replace_value - replaces the value from one node to another
 *
 * @existing: node to replace the value
 * @new_node: node to replace with
 *
 * Return: 1 (success)
 */
int replace_value(shash_node_t *existing, shash_node_t *new_node)
{
	free(existing->value);
	existing->value = new_node->value;
	free(new_node->key);
	free(new_node);
	return (1);
}
