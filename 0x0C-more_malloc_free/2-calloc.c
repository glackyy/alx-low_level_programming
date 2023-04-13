#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Entry Function
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pt (SUCCESS)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pt;
if (nmemb == 0 || size == 0)
	return (NULL);
pt = malloc(nmemb * size);
if (pt == NULL)
	return (NULL);
memset(pt, 0, nmemb * size);
return (pt);
}
