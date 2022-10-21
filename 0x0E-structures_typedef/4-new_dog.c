#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog
 * @name: New name
 * @age: new age
 * @owner: new owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *diff_dog;

	diff_dog = malloc(sizeof(struct dog));
	if (diff_dog == NULL)
		return (NULL);
	diff_dog->name = name;
	diff_dog->age = age;
	diff_dog->owner = owner;
	return (diff_dog);
}
