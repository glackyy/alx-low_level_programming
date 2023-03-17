#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int alphabt;
for (alphabt = 'a' ; alphabt <= 'z' ; alphabt++)
{
if (alphabt != 'e' && alphabt != 'q')
putchar(alphabt);
}
putchar('\n');
return (0);
}

