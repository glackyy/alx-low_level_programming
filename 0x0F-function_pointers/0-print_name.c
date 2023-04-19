#include "function_pointers.h"
/**
 * print_name - Entry Function
 * @name: char
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
