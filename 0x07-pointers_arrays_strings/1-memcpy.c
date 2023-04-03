#include "main.h"
/**
 * _memcpy - Entry Function
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: dest (SUCCESS)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p_dest = dest;
char *p_src = src;
while (n--)
	*p_dest++ = *p_src++;
return (dest);
}
