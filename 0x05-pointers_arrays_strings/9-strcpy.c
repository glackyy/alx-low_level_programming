#include "main.h"
/**
 * *_strcpy - Entry Function
 * @dest: char
 * @src: char
 * Return: origDest
 */
char *_strcpy(char *dest, char *src)
{
char *origDest = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (origDest);
}
