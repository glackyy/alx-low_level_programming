#include "main.h"
/**
 * factorial - Entry Function
 * @n: integer
 * Return: fact (n) (SUCCESS)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
