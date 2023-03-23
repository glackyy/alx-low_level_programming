#include "main.h"
/**
 * print_diagonal - Entry Function
 * @n: integer
 */
void print_diagonal(int n)
{
	int i, j;
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < n ; j++)
{
if (j < i)
_putchar(' ');
if (j == i)
_putchar('\\');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
return;
}
}
