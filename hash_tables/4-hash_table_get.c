#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* 1. Validation: check if table or key are NULL or key is empty */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* 2. Calculate the index to search in */
	index = key_index((const unsigned char *)key, ht->size);

	/* 3. Traverse the linked list at that index */
	node = ht->array[index];
	while (node != NULL)
	{
		/* 4. Compare keys */
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	/* 5. Return NULL if not found */
	return (NULL);
}

