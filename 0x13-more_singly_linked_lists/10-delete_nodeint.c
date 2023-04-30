#include "lists.h"
/**
 * delete_nodeint_at_index - Entry Function
 * @head: Pointer
 * @index: unsigned int
 * Return: 1 (SUCCESS) -1 (FAIL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *curr = *head;
listint_t *prev = NULL;
unsigned int i;
if (*head == NULL)
	return (-1);
for (i = 0 ; i < index && curr != NULL ; i++)
{
	prev = curr;
	curr = curr->next;
}
if (curr== NULL)
	return (-1);
if (prev == NULL)
	*head = curr->next;
else
	prev->next = curr->next;
free(curr);
return (1);
}
