#include "lists.h"
/**
 * get_dnodeint_at_index - Entry function
 * @index: unsigned int
 * @head: Pointer
 * Return: curr or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *curr;
unsigned int c = 0;
curr = head;
while (curr != NULL)
{
	if (c == index)
		return (curr);
	curr = curr->next;
	c++;
}
return (NULL);
}
