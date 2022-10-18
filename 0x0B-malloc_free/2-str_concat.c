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
	int len = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (s1 == NULL && S2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}

	arr = (char *)malloc(len);
	if (arr == NULL)
		return (NULL);
	strcpy(arr, s1);
	strcat(arr, s2);
	return (arr);
}
