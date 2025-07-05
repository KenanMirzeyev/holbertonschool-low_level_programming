#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - dog
 * @d: d
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: r
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d ->name = name;
	d->age = age;
	d->owner = owner;
}

