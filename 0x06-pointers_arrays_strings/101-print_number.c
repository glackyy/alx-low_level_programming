#include "main.h"
/**
 * print_number - Entry Function
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int number;

	number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}

	if (number / 10 != 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}

