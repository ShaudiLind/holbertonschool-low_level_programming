#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *new_key, *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_key = strdup(key);
	new_value = strdup(value);
	if (new_key == NULL || new_value == NULL)
	{
		free(new_key);
		free(new_value);
		free(new_node);
		return (0);
	}

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

