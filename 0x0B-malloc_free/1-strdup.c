#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - Entry Function
 * @str: char
 * Return: str_strdup (SUCCESS)
 */
char *_strdup(char *str)
{
char *str_strdup = malloc((strlen(str) + 1) * sizeof(char));	
if (str == NULL)
	return (NULL);
if (str_strdup == NULL)
	return (NULL);
strcpy(str_strdup, str);
return (str_strdup);
}
