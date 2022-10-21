#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Structure global declaration
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	 char *name;
	 float age;
	 char *owner;
};

/* declaration of init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
