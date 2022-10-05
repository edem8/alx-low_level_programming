#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string to pass
 * @s2: string to pass
 * Return: return pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	char * arr;
	if (s1 == NULL)
		*s1 = " ";
	if (s2 == NULL)
		*s2 = " ";
	*arr = strcat(s1, s2);
	return (strdup(arr));
}
