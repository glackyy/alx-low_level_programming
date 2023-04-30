#include "lists.h"
/**
 * delete_nodeint_at_index - Entry Function
 * @head: Pointer
 * @index: unsigned int
 * Return: 1 (SUCCESS) -1 (FAIL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t, *del_node;
unsigned int i;
if (*head == NULL)
	return (-1);
if (index == 0)
{
	del_node = *head;
	*head = (*head)->next;
	free(del_node);
	return (-1);
}
t= *head;
for (i = 0 ; i < index - 1 && t != NULL ; i++)
	t = t->next;
if (t == NULL || t->next == NULL)
	return (-1);
del_node = t->next;
t->next = del_node->next;
free(del_node);
return (1);
}
