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
	struct dog *newDog;
	char *c_name = NULL;
	char *c_owner = NULL;

	c_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (!c_name)
	{
		return (NULL);
	}
	c_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (!c_owner)
	{
		return (NULL);
	}
	newDog = malloc(sizeof(struct dog));
	if (!newDog)
	{
		return (NULL);
	}
	c_name = _strcpy(c_name, name);
	c_owner = _strcpy(c_owner, owner);
	newDog->name = c_name;
	newDog->age = age;
	newDog->owner = c_owner;
	free(c_name);
	free(c_owner);
	return (newDog);
}


