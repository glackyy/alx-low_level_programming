#include "lists.h"
/**
 * add_dnodeint_end - Entry function
 * @n: const int
 * @head: Pointer
 * Return: n_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *curr;
dlistint_t *n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
	return (NULL);
n_node->n = n;
n_node->next = NULL;
if (*head == NULL)
{
	n_node->prev = NULL;
	*head = n_node;
	return (n_node);
}
*curr = *head;
while (curr->next != NULL)
	curr = curr->next;
curr->next = n_node;
n_node->prev = curr;
return (n_node);
}
