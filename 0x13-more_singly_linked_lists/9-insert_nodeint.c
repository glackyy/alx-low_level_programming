#include "lists.h"
/**
 * insert_nodeint_at_index - Entry Function
 * @head: Pointer
 * @idx: unsigned int
 * @n: int
 * Return: addr new node or NULL if (fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *pre_node, *curr_node;
unsigned int i;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (idx == 0)
{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
pre_node = NULL;
curr_node = *head;
for (i = 0 ; i < idx && curr_node != NULL ; i++)
{
	pre_node = curr_node;
	curr_node = curr_node->next;
}
if (i != idx)
{
	free(new_node);
	return (NULL);
}
	new_node->next = curr_node;
	pre_node->next = new_node;
	return (new_node);
}
