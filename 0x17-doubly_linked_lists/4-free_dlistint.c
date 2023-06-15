#include "lists.h"
/**
 * free_dlistint - Entry function
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *curr;
while (head != NULL)
{
	curr = head;
	head = head->next;
	free(curr);
}
}
