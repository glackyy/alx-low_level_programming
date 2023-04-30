#include "lists.h"
/**
 * get_nodeint_at_index - Entry Function
 * @head: Pointer
 * @index: unsigned int
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
while (node != NULL && index > 0)
{
node = node->next;
index--;
}
return (node);
}
