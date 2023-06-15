#include "lists.h"
/**
 * delete_dnodeint_at_index - Entry function
 * @index: unsigned int
 * @head: Pointer
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr;
unsigned int c = 0;
if (head == NULL || *head == NULL)
	return (-1);
curr = *head;
if (index == 0)
{
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(curr);
	return (1);
}
while (c < index && curr != NULL)
{
	curr = curr->next;
	c++;
}
if (curr == NULL)
	return (-1);
curr->prev->next = curr->next;
if (curr->next != NULL)
	curr->next->prev = curr->prev;
free(curr);
return (1);
}
