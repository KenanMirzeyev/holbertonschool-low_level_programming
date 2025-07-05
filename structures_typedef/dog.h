#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that holds information about a dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Name of the dog's owner (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

