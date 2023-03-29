#include "main.h"
/**
 * _strncpy - Entry Function
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n && *src != '\0' ; i++)
	dest[i] = src[i];
for ( ; i < n ; i++)
	*dest = '\0';
return (dest);
}
