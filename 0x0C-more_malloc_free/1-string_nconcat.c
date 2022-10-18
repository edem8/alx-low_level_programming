#include "main.h"

/**
 * string_nconcat - concatenates some number of strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: return a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = strlen(s1) + n;
	char *arr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = NULL;
	if (s1 == NULL && s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}

	arr = malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	strcpy(arr, s1);
	if (n >= strlen(s2))
		strcat(arr, s2);
	else
		strncat(arr, s2, n);
	return (arr);
}
