#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdlib.h>



/**
 * struct dog - atributtes for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: this struct save the basic information of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*Define a nuew type*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
