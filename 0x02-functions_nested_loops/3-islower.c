#include "main.h"
/**
 * islower - Entry Point
 * @c: int
 * Return: 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}

