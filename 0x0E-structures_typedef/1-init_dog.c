#include "dog.h"

/**
 * init_dog - Initializing a variable of type dog
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth paramter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
