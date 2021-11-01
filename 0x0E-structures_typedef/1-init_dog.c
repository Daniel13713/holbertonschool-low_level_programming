#include "dog.h"

/**
 * init_dog - intitialize a struct
 *
 * @d: struct
 * @name: name
 * @age: age of the dog
 * @owner: owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
