#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int alp;
for (alp = 'A'; alp <= 'Z'; alp++)
{
putchar(tolower(alp));
}
return (0);
}

