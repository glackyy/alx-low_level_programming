#include "lists.h"
/**
 * print_dlistint - Entry function
 * @h: Pointer
 * Description: prints all the elements of a dlistint_t list
 * Return: c
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t c = 0;
while (h != NULL)
{
        print("%d\n", h->n);
        h = h->next;
        c++;
}
return (c);
}
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~                                                                                      
~            
