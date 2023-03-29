#include "main.h"
#include <string.h>
/**
 * leet - Entry Function
 * @str: char
 * Return: str (SUCCESS)
 */
char *leet(char *str)
{
int i;
char *leet_table = "4433007711";
for (i = 0 ; str[i] != '\0' ; i++)
{
char *pos = strchr("aAeEoOtTlL", str[i]);
if (pos != NULL)
{
int os = pos - "aAeEoOtTlL";
str[i] = leet_table[os];
}
}
return (str);
}
