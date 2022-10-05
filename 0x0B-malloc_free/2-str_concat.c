#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string to pass
 * @s2: string to pass
 * Return: return pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		*s1 = ' ';
	if (s2 == NULL)
		*s2 = ' ';
	return (strdup(strcat(s1, s2)));
}
