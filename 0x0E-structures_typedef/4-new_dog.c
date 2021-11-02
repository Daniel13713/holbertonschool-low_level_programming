#include "dog.h"
#include <stddef.h>

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * *_strcpy - Write a function that copies the string
 * pointed to by src, including the
 * terminating null byte (\0), to the buffer
 * pointed to by dest.
 *
 * @dest: varible of destine
 * @src: string of the source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}



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
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
	{
		goto error;
	}
	newDog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (!(newDog->name))
	{
		free(newDog);
		goto error;
	}
	newDog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (!(newDog->owner))
	{
		free(newDog->name);
		free(newDog);
		goto error;
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
error:
	return (NULL);
}


