#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev; /* Pointer to the previous element in the sorted linked list */
     struct shash_node_s *snext; /* Pointer to the next element in the sorted linked list */
} shash_node_t;

typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead; /* Pointer to the first element of the sorted linked list */
     shash_node_t *stail; /* Pointer to the last element of the sorted linked list */
} shash_table_t;

#endif

