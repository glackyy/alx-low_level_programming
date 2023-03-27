#include "main.h"
/**
 * rev_string - Entry Function
 * @s: char
 */
void rev_string(char *s)
{
int i, len;
char rev;
for (len = 0 ; s[len] != '\0' ; len++)
;
for (i = 0 ; i < len / 2 ; i++)
{
rev = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = rev;
}
}
