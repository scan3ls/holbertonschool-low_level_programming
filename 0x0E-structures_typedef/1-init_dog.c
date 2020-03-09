#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog struct
 *@d: new dog pointer
 *@name: name
 *@age: age
 *@owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
