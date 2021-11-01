#include "dog.h"
#include <stddef.h>


/**
 * *new_dog - create a new object dog
 *
 * @name: name of the dog
 * @age: age
 * @owner: owner
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(struct dog));
	if (!newDog)
	{
		return (NULL);
	}
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);


}
