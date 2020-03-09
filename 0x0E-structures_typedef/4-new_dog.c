#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

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
	printf("step 1\n");
	dog_t *d;

	printf("name: %d\n", name == NULL);
	if (name == NULL || owner == NULL)
	{
		exit(0);
		return (NULL);
	}
	printf("step 3\n");
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	printf("step 4\n");
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
