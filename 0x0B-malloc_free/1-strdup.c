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
char *str_strdup;
int len = 0;
int i;
if (str == NULL)
	return (NULL);
while (str[len] != '\0')
	len++;
str_strdup = malloc((len + 1) * sizeof(char));
if (str_strdup == NULL)
	return (NULL);
for (i = 0 ; str[i] ; i++)
	str_strdup[i] = str[i];
return (str_strdup);
}
