#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_numbers - Entry Function
 * @separator: const char
 * @n: const unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
	printf("%d", va_arg(args, int));
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
}
va_end(args);
printf("\n");
}
