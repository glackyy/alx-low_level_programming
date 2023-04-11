#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - Entry Function
 * @s1: char
 * @s2: char
 * Return: res (SUCCESS)
 */
char *str_concat(char *s1, char *s2)
{
char *res;
int i, j;
int len1, len2;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
len1 = 0;
len2 = 0;
while (s1[len1] != '\0')
	len1++;
while (s2[len2] != '\0')
	len2++;
res = malloc((len1 + len2 + 1) * sizeof(char));
if (res == NULL)
	return (NULL);
i = 0;
while (s1[i] != '\0')
{
	res[i] = s1[i];
	i++;
}
j = 0;
while (s2[j] != '\0')
{
	res[i + j] = s2[j];
	j++;
}
res[i + j] = '\0';
return (res);
}
