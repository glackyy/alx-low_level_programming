#include "lists.h"
/**
 * listint_len - Entry Function
 * @h: Pointer
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
