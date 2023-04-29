#include "lists.h"
/**
 * free_listint - Entry Function
 * @head: Pointer
 */
void free_listint(listint_t *head)
{
listint_t *curr, *next;
curr = head;
while (curr != NULL)
{
	next = curr->next;
	free(curr);
	curr = next;
}
}
