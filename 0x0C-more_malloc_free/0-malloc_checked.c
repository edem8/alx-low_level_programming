#include "main.h"

/**
 * malloc_checked - function allocates  memory using malloc
 * @b: variable to allocate for
 * Return: retun a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
