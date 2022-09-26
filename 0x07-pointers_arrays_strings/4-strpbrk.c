#include "main.h"

/**
 * _strpbrk - searching string for any of a set of bytes
 * @s: String to be scanned
 * @accept: string containing characters to match
 * Return: pointer to character in s that matches one the characters in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
