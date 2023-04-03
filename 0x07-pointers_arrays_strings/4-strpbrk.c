#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Entry Function
 * @s: char
 * @accept: char
 * Return: s or NULL (Success)
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *p = accept;
while (*p != '\0')
{
	if (*s == *p)
	return (s);
p++;
}
s++;
}
return (NULL);
}
