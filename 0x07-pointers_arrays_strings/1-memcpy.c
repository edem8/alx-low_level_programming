#include "main.h"

/**
 * _memcpy - copying memory areas
 * @dest: pointer parameter to pass
 * @src: pointer parameter to pass
 * @n: integer parameter to pass
 * Return: return pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
