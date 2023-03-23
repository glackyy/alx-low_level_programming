#include "main.h"
/**
 * print_line - Entry Function
 * @n: integer
 * Return: 0 (Success)
 */
void print_line(int n)
{
int nt;
for (nt = 0 ; nt < n ; nt++)
	_putchar('_');
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	_putchar('\n');
}
