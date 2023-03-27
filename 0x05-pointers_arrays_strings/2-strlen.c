#include "main.h"
/**
 * _strlen - Entry Function
 * @s: char
 * Return: len (Success)
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
	len++;
	s++;
}
return (len);
}
