#include "main.h"

/**
 * _strncat - concatenates only some number of strings
 * @dest: parameter to pass
 * @src: parameter to pass
 * @n: number of characters to concatenate
 * Return: return a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
