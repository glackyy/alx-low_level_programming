#include "lists.h"
/**
 * delete_nodeint_at_index - Entry Function
 * @head: Pointer
 * @index: unsigned int
 * Return: 1 (SUCCESS) -1 (FAIL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *pre_node, *curr_node;
unsigned int i;
if (*head == NULL)
	return (-1);
if (index == 0)
{
	curr_node = *head;
	*head = (*head)->next;
	free(curr_node);
	return (-1);
}
pre_node = NULL;
curr_node = *head;
for (i = 0 ; i < index && curr_node != NULL ; i++)
{
	pre_node = curr_node;
	curr_node = curr_node->next;
}
if (i != index || curr_node == NULL)
	return (-1);
pre_node->next = curr_node->next;
free(curr_node);
return (1);
}
