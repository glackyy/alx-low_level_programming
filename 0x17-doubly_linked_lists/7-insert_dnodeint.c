#include "lists.h"
/**
 * insert_dnodeint_at_index - Entry function
 * @n: int
 * @idx: unsigned int
 * @h: Pointer
 * Return: n_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *n_node, *curr;
unsigned int c = 0;
if (h == NULL)
	return (NULL);
n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
	return (NULL);
n_node->n = n;
if (idx == 0)
{
	n_node->prev = NULL;
	n_node->next = *h;
	if (*h != NULL)
		(*h)->prev = n_node;
	*h = n_node;
	return (n_node);
}
curr = *h;
while (curr != NULL && c < idx - 1)
{
	curr = curr->next;
	c++;
}
if (curr == NULL)
{
	free(n_node);
	return (NULL);
}
n_node->prev = curr;
n_node->next = curr->next;
if (curr->next != NULL)
	curr->next->prev = n_node;
curr->next = n_node;
return (n_node);
}
