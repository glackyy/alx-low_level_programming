#include "hash_tables.h"
/**
 * hash_table_delete - Entry Function
 * @ht: hash_table_t
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *n, *t;
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
