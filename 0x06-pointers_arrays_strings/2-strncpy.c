#include "main.h"

/**
 * _strncpy - copy string from src to dest
 * @dest: parameter to pass
 * @src: parameter to pass
 * @n: number of characters to copy
 * Return: return a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
