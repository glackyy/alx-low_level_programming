#include "lists.h"
/**
 * dlistint_len - Entry function
 * @h: Pointer
 * Return: c
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t c = 0;
while (h != NULL)
{
	c++;
	h = h->next;
}
return (c);
}
