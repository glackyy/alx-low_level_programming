#include "main.h"
/**
 * _strncat - Entry Function
 * @dest: char
 * @src: char
 * @n: int
 * Return: p (SUCCESS)
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
char *p = dest;
while (*dest != '\0')
dest++;
for (i = 0 ; i < n && *src != '\0' ; i++)
*dest++ = *src++;
*dest = '\0';
return (p);
}
