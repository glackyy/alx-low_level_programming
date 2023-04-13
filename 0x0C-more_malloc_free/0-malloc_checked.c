#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry Function
 * @b: unsigned int
 * Return: pt (SUCCESS)
 */
void *malloc_checked(unsigned int b)
{
void *pt = malloc(b);
if (pt == NULL)
	exit(98);
return (pt);


}
