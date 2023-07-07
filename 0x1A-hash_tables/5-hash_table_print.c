#include "hash_tables.h"
/**
 * hash_table_print - Entry Function
 * @ht: const hash_table_t
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *n;
unsigned long int i;
int f = 1;
if (ht == NULL)
	return;
printf("{");
for (i = 0; i < ht->size; i++)
{
	n = ht->array[i];
	while (n != NULL)
	{
		if (!f)
			printf(", ");
		printf("'%s': '%s'", n->key, n->value);
		f = 0;
		n = n->next;
	}
}
printf("}\n");
}
