#include "main.h"
/**
 * _memset - Entry Function
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: s (SUCCESS)
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
	*p++ = b;
return (s);
}
