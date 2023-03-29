#include "main.h"
#include <ctype.h>
/**
 * string_toupper - Entry Function
 * @str: char
 * Return: str (SUCCESS)
 */
char *string_toupper(char *str)
{
char *p = str;
while (*p != '\0')
{
	*p = toupper(*p);
	p++;
}
return (str);
}
