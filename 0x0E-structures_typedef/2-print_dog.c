#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Entry Function
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("nil");
	if (d->owner == NULL)
		printf("nil");
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
