#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer parameter
 * @b: character parameter
 * @n: integer parameter
 * Return: return (0) or some character
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
