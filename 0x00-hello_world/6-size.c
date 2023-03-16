#include <stdio.h>
/**
 * main - A program that prints the size of various data types on the system
 * Return: 0 (Success)
 */
int main(void)
{printf("Size of int : %lu byte(s)\n", sizeof(int));
printf("Size of char : %lu byte(s)\n", sizeof(char));
printf("Size of long int : %lu byte(s)\n", sizeof(long int));
printf("Size of long long int : %lu byte(s)\n", sizeof(long long int));
printf("Size of float : %lu byte(s)\n", sizeof(float)); }
