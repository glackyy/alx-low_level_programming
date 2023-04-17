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
newdog->name = malloc(strlen(name) + 1);
if (newdog->name == NULL)
{
	free(newdog);
	return (NULL);
}
strcpy(newdog->name, name);
newdog->owner = malloc(strlen(owner) + 1);
if (newdog->owner == NULL)
{
	free(newdog->name);
	free(newdog);
	return (NULL);
}
strcpy(newdog->owner, owner);
newdog->age = age;
return (newdog);
}
