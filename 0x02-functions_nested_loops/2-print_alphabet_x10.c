#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * Return: 0 (Sucess)
 */
void print_alphabet_x10(void)
{
int i = 0;
char alph;
while (i < 10)
{
alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
i++;
}
}

