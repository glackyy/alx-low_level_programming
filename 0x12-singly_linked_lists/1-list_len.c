#include "lists.h"
/**
 * list_len - Entry Function
 * @h: Pointer
 * Return: count
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
