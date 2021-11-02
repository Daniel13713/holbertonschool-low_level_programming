#include "dog.h"

/**
 * free_dog - free all memory
 *
 * @d: pointer to structur
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
