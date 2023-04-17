#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Entry Function
 * @name: char
 * @age: float
 * @owner: char
 * Return: NewDog (SUCCESS)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
	return (NULL);
newdog->name = strdup(name);
if (newdog->name == NULL)
{
	free(newdog);
	return (NULL);
}
newdog->age = age;
newdog->owner = strdup(owner);
if (newdog->owner == NULL)
{
	free(newdog->name);
	free(newdog);
	return (NULL);
}
return (newdog);
}
