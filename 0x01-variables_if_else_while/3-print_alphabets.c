#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
int alPHA;
for (alPHA = 'A' ; alPHA <= 'Z' ; alPHA++)
putchar(tolower(alPHA));
for (alPHA = 'A' ; alPHA <= 'Z' ; alPHA++)
putchar(alPHA);
putchar('\n');
return (0);
}

