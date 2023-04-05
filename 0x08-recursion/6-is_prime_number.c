#include "main.h"
/**
 * is_prime_number_help - Entry Function
 * @n: integer
 * @i: integer
 * Return: n (SUCCESS)
 */
int is_prime_number_help(int n, int i)
{
        if (n <= 1)
                return (0);
        if (i * i > n)
                return (1);
        if (n % i == 0)
                return (0);
        return (is_prime_number_help(n, i + 1));
}
/**
 * is_prime_number - Entry Function
 * @n: integer
 * Return: n (SUCCESS)
 */
int is_prime_number(int n)
{
return (is_prime_number_help(n, 2));
}
