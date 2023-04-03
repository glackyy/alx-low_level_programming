#include "main.h"
#include <string.h>
/**
 * _strspn - Entry Function
 * @s: char
 * @accept: char
 * Return: c (SUCCESS)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
int acc_length = strlen(accept);
while (*s != '\0')
{
int i;
for (i = 0 ; i < acc_length ; i++)
{
	if (*s == accept[i])
	{
		c++;
		break;
	}
	}
	if (i == acc_length)
		break;
	s++;
}
	return (c);
}
