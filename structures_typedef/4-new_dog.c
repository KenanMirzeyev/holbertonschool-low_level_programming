#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new;
	char *newname, *newowner;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	newname = malloc(strlen(name) + 1);
	if (newname == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(newname, name);

	newowner = malloc(strlen(owner) + 1);
	if (newowner == NULL)
	{
		free(new);
		free(newname);
		return (NULL);
	}
	strcpy(newowner, owner);

	new->name = newname;
	new->age = age;
	new->owner = newowner;

	return (new);
}





