#include "main.h"

/**
 * _strspn - Getting the length of a prefix substring
 * @s: String to be scanned
 * @accept: Strign containing characters to match
 * Return: return length ofmatvhed string
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
