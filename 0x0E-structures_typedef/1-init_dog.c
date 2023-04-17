#include "dog.h"
/**
 * init_dog - Entry Function
 * @d: struct dog
 * @name: char
 * @age: float
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
