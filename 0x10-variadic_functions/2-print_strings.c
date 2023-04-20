#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * print_strings - Entry Function
 * @separator: const char
 * @n: const unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
const char *str = va_arg(args, const char *);
if (str != NULL)
	printf("%s", str);
else
	printf("(nil)");
if (separator != NULL && i != n - 1)
	printf("%s", separator);
}
va_end(args);
printf("\n");
}
