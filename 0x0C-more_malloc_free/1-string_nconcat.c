#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry Function
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: res (SUCCESS)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *res;
len1 = 0;
len2 = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
	n = len2;
res = malloc (len1 + n + 1);
if (res == NULL)
	return (NULL);
memcpy(res, s1, len1);
memcpy(res + len1, s2, n);
res[len1 + n ] = '\0';
return (res);

}
