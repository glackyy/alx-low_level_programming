#include "function_pointers.h"
/**
 * array_iterator - Entry Function
 * @array: int
 * @size: size_t
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0 ; i < size ; i++)
	action(array[i]);
}
