#include "main.h"
/**
 * flip_bits - Entry Function
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: c
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x;
unsigned int c = 0;
x = n ^ m;
while (x)
{
	c += x & 1;
	x >>= 1;
}
return (c);
}
