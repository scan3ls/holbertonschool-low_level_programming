#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - return pointer to new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner name
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL || name == NULL || owner == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
