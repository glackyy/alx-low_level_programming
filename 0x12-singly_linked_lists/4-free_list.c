#include "lists.h"
/**
 * free_list - Entry Function
 * @head: Pointer
 */
void free_list(list_t *head)
{
list_t *curr = head;
while (curr != NULL)
{
list_t *next = curr->next;
free(curr->str);
free(curr);
curr = next;
}
}
