#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	/* 1. Allocate memory for the hash table structure itself */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* 2. Assign the size of the array */
	ht->size = size;

	/* 3. Allocate memory for the array of nodes (pointers to hash_node_t) */
	/* We use calloc because it initializes the memory to NULL */
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}

