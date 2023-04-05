#include "main.h"
/**
 * find_sqrt - find sqrt
 * @i: integer
 * @n: integer
 * Return: sqrt (SUCCESS)
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - Entry Function
 * @n: integer
 * Return: n (SUCCESS)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));

}
