#include "lists.h"
/**
 * free_list - Entry function
 * @head: Pointer
 */
void free_list(dlistint_t *head)
{
dlistint_t *curr;
while (head != NULL)
{
	curr = head;
	head = head->next;
	free(curr);
}
}
