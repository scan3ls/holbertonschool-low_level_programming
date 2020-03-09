#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory useds for dog
 *@d: pointer to dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d->age);
	free(d);
}
