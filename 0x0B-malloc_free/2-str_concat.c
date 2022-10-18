#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string to pass
 * @s2: string to pass
 * Return: return pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	arr = (char*)malloc((sizeof(s1) * strlen(s1)) + (sizeof(s2) * strlen(s2)) + 1);
	if (arr == NULL)
		return (NULL);
	strcpy(arr, s1);
	strcat(arr, s2);
	return (arr);
}
