#include "main.h"
/**
 * print_last_digit - Entry Point
 * @num: last number
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
int ldigit;
if (num < 0)
num = -num;
ldigit = num % 10;
if (ldigit < 0)
ldigit = -ldigit;
_putchar(ldigit + '0');
return (ldigit);
}

