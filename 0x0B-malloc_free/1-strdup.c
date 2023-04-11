#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - Entry Function
 * @str: char
 * Return: str_strdup (SUCCESS)
 */
char *_strdup(char *str)
{
int len = 0;
int i;
char *str_strdup = malloc((len + 1) * sizeof(char));
while (str[len] != '\0')
	len++;
if (str == NULL)
	return (NULL);
if (str_strdup == NULL)
	return (NULL);
for (i = 0 ; i <= len ; i++)
	str_strdup[i] = str[i];
return (str_strdup);
}
