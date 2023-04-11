#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Entry Function
 * @size: unsigned int
 * @c: char
 * Return: ar (SUCCESS)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar = malloc(sizeof(char) * size);
if (size == 0)
	return (NULL);
if (ar == NULL)
	return (NULL);
for (i = 0 ; i < size ; i++)
	ar[i] = c;
return (ar);
}
