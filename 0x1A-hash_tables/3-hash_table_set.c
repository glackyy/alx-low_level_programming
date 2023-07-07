#include "hash_tables.h"
/**
 * hash_table_set - Entry Function
 * @value: const char
 * @key: const char
 * @ht: hash_table_t
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *n_node, *t;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
	return (0);
idx = key_index((unsigned char *)key, ht->size);
t = ht->array[idx];
while (t != NULL)
{
	if (strcmp(t->key, key) == 0)
	{
		free(t->value);
		t->value = strdup(value);
		if (t->value == NULL)
			return (0);
		return (1);
	}
	t = t->next;
}
n_node = malloc(sizeof(hash_table_t));
if (n_node == NULL)
	return (0);
n_node->key = strdup(key);
n_node->value = strdup(value);
if (n_node->key == NULL || n_node->value == NULL)
{
	free(n_node->key);
	free(n_node->value);
	free(n_node);
	return (0);
}
n_node->next = ht->array[idx];
ht->array[idx] = n_node;
return (1);
}
