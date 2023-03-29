#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - Entry Function
 * @str: char
 * Return: str (SUCCESS)
 */
char *cap_string(char *str)
{
int i;
int len = strlen(str);
int cap_next = 1;
for (i = 0 ; i < len ; i++)
{
char c = str[i];
if (isspace(c) || c == ',' || c == ';' || c == '.' || c == '!' ||
c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
{
cap_next = 1;
}
else if (cap_next)
{
str[i] = toupper(c);
cap_next = 0;
}
}
return (str);
}
