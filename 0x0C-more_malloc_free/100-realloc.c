#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous mem block
 * @old_size: size in bytes of allocated space
 * @new_size: size in bytes for new alocated space
 * Return: pointer to new mem block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = copy[i];
	free(ptr);
	return (p);
}
