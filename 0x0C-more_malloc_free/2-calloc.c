#include "main.h"

/**
 * _calloc - alocating and initializing memory to 0
 * @nmemb: number of element to allocate for
 * @size: memory size to allocate
 * Return: return a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (int *)calloc(nmemb, sizeof(size));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
