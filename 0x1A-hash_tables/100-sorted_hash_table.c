#include "hash_tables.h"
/**
 * shash_table_create - Entry Function
 * @size: unsigned long int
 * Return: hash_t
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *hash_t;
unsigned long int i;
hash_t = malloc(sizeof(shash_table_t));
if (hash_t == NULL)
	return (NULL);
hash_t->size = size;
hash_t->array = malloc(sizeof(shash_node_t *) * size);
if (hash_t->array == NULL)
{
	free(hash_t);
	return (NULL);
}
for (i = 0; i < size; i++)
	hash_t->array[i] = NULL;
hash_t->shead = NULL;
hash_t->stail = NULL;
return (hash_t);
}

/**
 * shash_table_set - Entry Function
 * @value: const char
 * @key: const char
 * @ht: shash_table_t
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *n_node, *n, *prev;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
	return (0);
idx = key_index((unsigned char *)key, ht->size);
n = ht->array[idx];
while (n != NULL)
{
	if (strcmp(n->key, key) == 0)
        {
		free(n->value);
		n->value = strdup(value);
		return (1);
        }
	n = n->next;
}
n_node = malloc(sizeof(shash_node_t));
if (n_node == NULL)
	return (0);
n_node->key = strdup(key);
n_node->value = strdup(value);
n_node->next = ht->array[idx];
n_node->sprev = NULL;
n_node->snext = NULL;
ht->array[idx] = n_node;
if (ht->shead == NULL)
{
	ht->shead = n_node;
	ht->stail = n_node;
}
else
{
if (strcmp(n_node->key, ht->shead->key) < 0)
{
	n_node->snext = ht->shead;
	ht->shead->sprev = n_node;
	ht->shead = n_node;
}
else if (strcmp(n_node->key, ht->stail->key) > 0)
{
	n_node->sprev = ht->stail;
	ht->stail->snext = n_node;
	ht->stail = n_node;
}
else
{
	n = ht->shead;
	while (n != NULL && strcmp(n_node->key, n->key) > 0)
	{
		prev = n;
		n = n->snext;
	}
	prev->snext = n_node;
	n_node->sprev = prev;
	n_node->snext = n;
	if (n != NULL)
		n->sprev = n_node;
}
}
return (1);
}

/**
 * shash_table_get - Entry Function
 * @key: const char
 * @ht: const shash_table_t
 * Return: NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *n;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);
idx = key_index((unsigned char *)key, ht->size);
n = ht->array[idx];
while (n != NULL)
{
	if (strcmp(n->key, key) == 0)
		return n->value;
	n = n->next;
}
return (NULL);
}

/**
 * shash_table_print - Entry Function
 * @ht: const shash_table_t
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *n;
if (ht == NULL)
	return;
printf("{");
n = ht->shead;
while (n != NULL)
{
	printf("'%s': '%s'", n->key, n->value);
	if (n->snext != NULL)
		printf(", ");
	n = n->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - Entry Function
 * @ht: const shash_table_t
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *n;
if (ht == NULL)
	return;
printf("{");
n = ht->stail;
while (node != NULL)
{
	printf("'%s': '%s'", n->key, n->value);
	if (n->sprev != NULL)
		printf(", ");
	n = n->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - Entry Function
 * @ht: shash_table_t
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *n, *t;
unsigned long int i;
if (ht == NULL)
	return;
for (i = 0; i < ht->size; i++)
{
n = ht->array[i];
while (n != NULL)
{
t = n;
n = n->next;
free(t->key);
free(t->value);
free(t);
}
}
free(ht->array);
free(ht);
}
