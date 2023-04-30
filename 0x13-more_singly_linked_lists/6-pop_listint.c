#include "lists.h"
/**
 * pop_listint - Entry Function
 * @head: Pointer
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int n;
if (head == NULL || *head == NULL)
	return (0);
t = *head;
*head = (*head)->next;
n = t->n;
free(t);
return (n);
}
