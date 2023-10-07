#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the array
 *
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = array;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
