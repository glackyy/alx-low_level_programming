#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
char numh = '0';
while (numh <= '9')
{
putchar(numh);
numh++;
}
numh = 'a';
while (numh <= 'f')
{
putchar(numh);
numh++;
}
putchar('\n');
return (0);
}

