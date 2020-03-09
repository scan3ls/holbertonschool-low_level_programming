#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - finds the length of a string
 *@s: string to be used
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

/**
 * _strcpy - copy a string to a destination
 *@dest: destination of source
 *@src: source string to be copied
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = src[i];
	return (dest);
}

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

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);

	return (d);
}
