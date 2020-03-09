#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *@d: struct to be printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		name = "(nil)";
	}
	else
	{
		name = d->name;
	}

	if (d->owner == NULL)
	{
		owner = "(nil)";
	}
	else
	{
		owner = d->owner;
	}

	age = d->age;

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}
