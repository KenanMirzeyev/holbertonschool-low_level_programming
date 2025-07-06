#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - returns the length of a string
 * @s: input string
 * Return: length of the string
 */
int _str_len(char *s)
{
	int len = 0;

	while (s && s[len] != '\0')
		len++;

	return (len);
}

/**
 * _str_cpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_str_cpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 *
 * Return: pointer to the new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggo;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	if (!name || !owner)
		return (NULL);

	new_doggo = malloc(sizeof(dog_t));
	if (!new_doggo)
		return (NULL);

	name_len = _str_len(name);
	owner_len = _str_len(owner);

	name_copy = malloc(name_len + 1);
	if (!name_copy)
	{
		free(new_doggo);
		return (NULL);
	}
	_str_cpy(name_copy, name);

	owner_copy = malloc(owner_len + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(new_doggo);
		return (NULL);
	}
	_str_cpy(owner_copy, owner);

	new_doggo->name = name_copy;
	new_doggo->age = age;
	new_doggo->owner = owner_copy;

	return (new_doggo);
}

