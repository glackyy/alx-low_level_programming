#include "lists.h"
/**
 * free_listint2 - Entry Function
 * @head: Pointer
 */
void free_listint2(listint_t **head)
{
listint_t *curr, *next;
if (head == NULL)
	return;
curr = *head;
while (curr != NULL)
{
	next = curr->next;
	free(curr);
	curr = next;
}
*head = NULL;
}
