#include "main.h"
#include <string.h>
/**
 * _strcat - Entry Function
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++=*src++;
	*dest = '\0';
	return (p);

}
