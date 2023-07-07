#include "hash_tables.h"
/**
 * hash_table_get - Entry Function
 * @key: const char
 * @ht: const hash_table_t
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *n;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);
idx = key_index((unsigned char *)key, ht->size);
n = ht->array[idx];
while (n != NULL)
{
if (strcmp(n->key, key) == 0)
	return (n->value);
n = n->next;
}
return (NULL);
}
